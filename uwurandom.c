#include <linux/uaccess.h>
#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/random.h>
#include <linux/string.h>
#include <linux/device.h>
#include <linux/init.h>
#include <linux/slab.h>
#include <linux/fs.h>
#include <linux/version.h>

#include "uwurandom_types.h"
#include "uwurandom_markov_data.h"

MODULE_LICENSE("Dual MIT/GPL");
MODULE_DESCRIPTION("urandom but better");
MODULE_AUTHOR("valadaptive");
MODULE_VERSION("0.1");

#define COPY_STR(dst, src, len) copy_to_user((dst), (src), (len))

static ssize_t dev_read(struct file *, char *, size_t, loff_t *);
static int     dev_open(struct inode *, struct file *);
static int     dev_release(struct inode *, struct file *);

static struct file_operations fops = {
    .owner = THIS_MODULE,
    .read = dev_read,
    .open = dev_open,
    .release = dev_release
};

static int major;
static struct class* dev_class;
static dev_t dev_num;

#define CREATE_PRINT_STRING(printed_string) {\
    .opcode = UWU_PRINT_STRING,\
    .state = {\
        .print_string = {\
            .string = (printed_string),\
            .remaining_chars = sizeof(printed_string) - 1\
        }\
    }\
}

#define CREATE_REPEAT_CHARACTER(repeated_character, num_repetitions) {\
    .opcode = UWU_REPEAT_CHARACTER,\
    .state = {\
        .repeat_character = {\
            .character = (repeated_character),\
            .remaining_chars = (num_repetitions)\
        }\
    }\
}


typedef struct {
    size_t len;
    char* string;
} string_with_len;

#define STRING_WITH_LEN(literal) {.len = (sizeof(literal) - 1), .string = literal}

static string_with_len actions[] = {
    STRING_WITH_LEN("*tilts head*"),
    STRING_WITH_LEN("*twitches ears slightly*"),
    STRING_WITH_LEN("*purrs*"),
    STRING_WITH_LEN("*falls asleep*"),
    STRING_WITH_LEN("*sits on ur keyboard*"),
    STRING_WITH_LEN("*nuzzles*"),
    STRING_WITH_LEN("*stares at u*"),
    STRING_WITH_LEN("*points towards case of monster zero ultra*"),
    STRING_WITH_LEN("*sneezes*"),
    STRING_WITH_LEN("*plays with yarn*"),
    STRING_WITH_LEN("*eats all ur doritos*"),
    STRING_WITH_LEN("*lies down on a random surface*")
};

const size_t RAND_SIZE = 128;
static unsigned int uwu_random_int(uwu_state* state) {
    if (state->rng_idx >= RAND_SIZE) {
        get_random_bytes(state->rng_buf, RAND_SIZE * sizeof(unsigned int));
        state->rng_idx = 0;
    }
    unsigned int rand_value = state->rng_buf[state->rng_idx];
    state->rng_idx++;
    return rand_value;
}

// Pick a random program from the list of programs and write it to the ops list
static void
generate_new_ops(uwu_state* state) {
    // init to 0 in case get_random_bytes fails
    unsigned int random = uwu_random_int(state);

    static uwu_op null_op = {
        .opcode = UWU_NULL
    };

    static const int NUM_OPS = 10;

    if (state->prev_op == -1) {
        random %= NUM_OPS;
    } else {
        // don't repeat previous op
        random %= NUM_OPS - 1;
        if (random >= state->prev_op) {
            random += 1;
        }
    }

    state->prev_op = random;

    uwu_op* ops = state->ops;
    switch (random) {
        case 0: { // uwu
            uwu_op op = CREATE_PRINT_STRING("uwu");
            ops[0] = op;
            ops[1] = null_op;
            break;
        }
        case 1: { // catgirl nonsense
            random = uwu_random_int(state);
            uwu_op op1 = CREATE_PRINT_STRING("mr");
            uwu_op op2 = {
                .opcode = UWU_MARKOV,
                .state = {
                    .markov = {
                        .prev_ngram = 7, // mr
                        .remaining_chars = (random % 125) + 25,
                        .ngrams = catnonsense_ngrams
                    }
                }
            };
            uwu_op op3 = CREATE_PRINT_STRING("nya");
            ops[0] = op1;
            ops[1] = op2;
            ops[2] = op3;
            ops[3] = null_op;
            break;
        }
        case 2: { // nyaaaaaaa
            random = uwu_random_int(state);
            uwu_op op1 = CREATE_PRINT_STRING("ny");
            uwu_op op2 = CREATE_REPEAT_CHARACTER('a', (random % 7) + 1);
            ops[0] = op1;
            ops[1] = op2;
            ops[2] = null_op;
            break;
        }
        case 3: { // >/////<
            random = uwu_random_int(state);
            uwu_op op1 = CREATE_PRINT_STRING(">");
            uwu_op op2 = CREATE_REPEAT_CHARACTER('/', (random % 4) + 3);
            uwu_op op3 = CREATE_PRINT_STRING("<");
            ops[0] = op1;
            ops[1] = op2;
            ops[2] = op3;
            ops[3] = null_op;
            break;
        }
        case 4: { // :3
            uwu_op op = CREATE_PRINT_STRING(":3");
            ops[0] = op;
            ops[1] = null_op;
            break;
        }
        case 5: { // actions
            random = uwu_random_int(state);
            string_with_len action = actions[random % (sizeof(actions) / sizeof(string_with_len))];
            uwu_op op = {
                .opcode = UWU_PRINT_STRING,
                .state = {
                    .print_string = {
                        .string = action.string,
                        .remaining_chars = action.len
                    }
                }
            };
            ops[0] = op;
            ops[1] = null_op;
            break;
        }
        case 6: { // keyboard mash
            random = uwu_random_int(state);
            uwu_op op = {
                .opcode = UWU_MARKOV,
                .state = {
                    .markov = {
                        .prev_ngram = random % (sizeof(keysmash_ngrams) / sizeof(uwu_markov_ngram)),
                        .remaining_chars = (random % 125) + 25,
                        .ngrams = keysmash_ngrams
                    }
                }
            };
            ops[0] = op;
            ops[1] = null_op;
            break;
        }
        case 7: { // screaming
            random = uwu_random_int(state);
            uwu_op op = CREATE_REPEAT_CHARACTER('A', (random % 12) + 5);
            ops[0] = op;
            ops[1] = null_op;
            break;
        }
        case 8: { // aww the scrunkly :)
            random = uwu_random_int(state);
            uwu_op op1 = CREATE_PRINT_STRING("aw");
            uwu_op op2 = {
                .opcode = UWU_MARKOV,
                .state = {
                    .markov = {
                        .prev_ngram = 37, // aw
                        .remaining_chars = (random % 75) + 25,
                        .ngrams = scrunkly_ngrams
                    }
                }
            };
            ops[0] = op1;
            ops[1] = op2;
            ops[2] = null_op;
            break;
        }
        case 9: { // owo
            uwu_op op = CREATE_PRINT_STRING("owo");
            ops[0] = op;
            ops[1] = null_op;
            break;
        }
    }
}

// Execute an operation once. Returns the number of characters written, or a negative value on error.
static int exec_op(uwu_state* state, char* buf, size_t len) {
    uwu_op* op = &state->ops[state->current_op];
    switch (op->opcode) {
        case UWU_PRINT_STRING: {
            char* string = op->state.print_string.string;
            size_t remaining = op->state.print_string.remaining_chars;

            if (remaining == 0) return 0;

            size_t num_chars_to_copy = remaining > len ? len : remaining;

            int result = COPY_STR(buf, string, num_chars_to_copy);
            // TODO: advance state in failure case
            if (result) return -EFAULT;

            // Advance state by number of characters copied;
            op->state.print_string.string += num_chars_to_copy;
            op->state.print_string.remaining_chars -= num_chars_to_copy;

            return num_chars_to_copy;
        }

        case UWU_MARKOV: {
            size_t ngram_index = op->state.markov.prev_ngram;
            uwu_markov_ngram* ngrams = op->state.markov.ngrams;
            size_t remaining = op->state.markov.remaining_chars;

            size_t num_chars_to_copy = remaining > len ? len : remaining;

            int i;
            for (i = 0; i < num_chars_to_copy; i++) {
                uwu_markov_ngram ngram = ngrams[ngram_index];
                unsigned int random = uwu_random_int(state);
                random %= ngram.total_probability;
                int j = 0;
                while (true) {
                    uwu_markov_choice choice = ngram.choices[j];
                    size_t cumulative_probability = choice.cumulative_probability;
                    if (random < cumulative_probability) {
                        ngram_index = choice.next_ngram;
                        int result = COPY_STR(buf + i, &choice.next_char, 1);
                        if (result) return -EFAULT;
                        break;
                    }
                    j++;
                }
            }

            op->state.markov.prev_ngram = ngram_index;
            op->state.markov.remaining_chars -= num_chars_to_copy;

            return num_chars_to_copy;
        }

        case UWU_REPEAT_CHARACTER: {
            char* c = &op->state.repeat_character.character;
            int i;
            for (i = 0; i < len; i++) {
                if (op->state.repeat_character.remaining_chars == 0) {
                    // Out of characters. Return the number of characters thus written.
                    return i;
                }
                int result = COPY_STR(buf + i, c, 1);
                if (result) return -EFAULT;
                op->state.repeat_character.remaining_chars--;
            }
            return len;
        }

        default:
            return 0;
    }
}

static const char SPACE = ' ';

// Fill the given buffer with UwU
static int write_chars(uwu_state* state, char* buf, size_t n) {
    size_t total_written = 0;
    while (total_written < n) {
        if (state->print_space) {
            int result = COPY_STR(buf + total_written, &SPACE, 1);
            if (result) return -EFAULT;
            total_written++;
            state->print_space = false;
            continue;
        }

        size_t chars_written = exec_op(state, buf + total_written, n - total_written);
        if (chars_written < 0) return chars_written;

        if (chars_written == 0) {
            state->current_op++;
            if (state->current_op >= MAX_OPS || state->ops[state->current_op].opcode == UWU_NULL) {
                // regenerate ops
                generate_new_ops(state);
                state->print_space = true;
                state->current_op = 0;
            }
        } else {
            total_written += chars_written;
        }
    }
    return 0;
}

static ssize_t
dev_read(struct file *fp, char *buf, size_t n, loff_t *of) {
    uwu_state* state = fp->private_data;

    int result = write_chars(state, buf, n);
    if (result < 0) return result;

    return n;
}

static int
dev_open(struct inode *ino, struct file *fp) {
    size_t len = sizeof(uwu_state);

    uwu_state *data = kmalloc(len, GFP_KERNEL);

    if (data == NULL) {
        return -ENOMEM;
    }

    unsigned int* rng_buf = kmalloc(RAND_SIZE * sizeof(unsigned int), GFP_KERNEL);

    if (rng_buf == NULL) {
        kfree(data);
        return -ENOMEM;
    }

    data->prev_op = -1;
    data->current_op = 0;
    data->rng_buf = rng_buf;
    // mark the offset into rng_buf as just past the end of the buffer,
    // meaning we'll regenerate the buffer the first time we ask for random bytes
    data->rng_idx = RAND_SIZE;
    generate_new_ops(data);

    fp->private_data = data;

    return 0;
}

static int
dev_release(struct inode *ino, struct file *fp) {
    kfree(((uwu_state*) fp->private_data)->rng_buf);
    kfree(fp->private_data);
    fp->private_data = NULL;
    return 0;
}

// Kernel versions 6.2 and up take a const* to devices in dev_uevent
#if ( LINUX_VERSION_CODE >= KERNEL_VERSION(6,2,0) )
typedef const struct device* uevent_dev_ptr;
#else
typedef struct device* uevent_dev_ptr;
#endif

// Make sure all users can thoroughly enjoy /dev/uwurandom
static int
dev_uevent(uevent_dev_ptr dev, struct kobj_uevent_env* env) {
    int result = add_uevent_var(env, "DEVMODE=%#o", 0666);
    if (!result) {
        return result;
    }
    return 0;
}

static void
kexit(void) {
    device_destroy(dev_class, dev_num);
    class_destroy(dev_class);
    unregister_chrdev(major, "uwurandom");
    return;
}

static int
kinit(void) {
    struct device* pDev;

    major = register_chrdev(0, "uwurandom", &fops);

    if (major < 0)
        return major;

    dev_num = MKDEV(major, 0);

    // Create device class and device automatically. So nice!
    dev_class = class_create(THIS_MODULE, "uwurandom");
    if (IS_ERR(dev_class)) {
        unregister_chrdev(major, "uwurandom");
        return PTR_ERR(dev_class);
    }

    dev_class->dev_uevent = dev_uevent;

    pDev = device_create(dev_class, NULL, dev_num, NULL, "uwurandom");
    if (IS_ERR(pDev)) {
        class_destroy(dev_class);
        unregister_chrdev(major, "uwurandom");
        return PTR_ERR(pDev);
    }


    return 0;
}

module_init(kinit);
module_exit(kexit);
