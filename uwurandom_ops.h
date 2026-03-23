#ifndef _UWURANDOM_OPS_H
#define _UWURANDOM_OPS_H

#include "uwurandom_platform.h"
#include "uwurandom_types.h"
#include "uwurandom_markov_data.h"
#include "uwurandom_core.h"
#include <string.h>

static string_with_len actions[] = {
    STRING_WITH_LEN("*tilts head*"),
    STRING_WITH_LEN("*twitches ears slightly*"),
    STRING_WITH_LEN("*purrs*"),
    STRING_WITH_LEN("*falls asleep*"),
    STRING_WITH_LEN("*sits on ur keyboard*"),
    STRING_WITH_LEN("*nuzzles*"),
    STRING_WITH_LEN("*stares at u*"),
    STRING_WITH_LEN("*sneezes*"),
    STRING_WITH_LEN("*plays with yarn*"),
    STRING_WITH_LEN("*eats all ur doritos*"),
    STRING_WITH_LEN("*lies down on a random surface*"),
    STRING_WITH_LEN("*rolls around on the floor*"),
    STRING_WITH_LEN("*spins around*"),
    STRING_WITH_LEN("*tugs on ur sleeve*"),
    STRING_WITH_LEN("*jumps a little*"),
    STRING_WITH_LEN("*yawns*"),
    STRING_WITH_LEN("*flops over*"),
    STRING_WITH_LEN("*paws at ur leg*"),
    STRING_WITH_LEN("*curls up and takes a little nap*")
};

static string_with_len faces[] = {
    STRING_WITH_LEN("UwU"),
    STRING_WITH_LEN("OwO"),
    STRING_WITH_LEN("UwU"),
    STRING_WITH_LEN("OwO"),
    STRING_WITH_LEN(">.<"),
    STRING_WITH_LEN("=^.^="),
    STRING_WITH_LEN(":P"),
    STRING_WITH_LEN("=^-.-^=")
};

static string_with_len phrase_punctuation[] = {
    STRING_WITH_LEN(", "),
    STRING_WITH_LEN(", "),
    STRING_WITH_LEN(", "),
    STRING_WITH_LEN(", "),
    STRING_WITH_LEN("; "),
    STRING_WITH_LEN("—"),
    STRING_WITH_LEN("—"),
    STRING_WITH_LEN("—"),
};

static string_with_len sentence_finishers[] = {
    STRING_WITH_LEN("."),
    STRING_WITH_LEN("."),
    STRING_WITH_LEN("."),
    STRING_WITH_LEN("!"),
};

static string_with_len emojis[] = {
    STRING_WITH_LEN("🐈"),
    STRING_WITH_LEN("🐱"),
    STRING_WITH_LEN("😾"),
    STRING_WITH_LEN("😿"),
    STRING_WITH_LEN("🙀"),
    STRING_WITH_LEN("😺"),
    STRING_WITH_LEN("😽"),
    STRING_WITH_LEN("😼"),
    STRING_WITH_LEN("😸"),
    STRING_WITH_LEN("😹"),
    STRING_WITH_LEN("😻"),
    STRING_WITH_LEN("🧶"),
    STRING_WITH_LEN("🧶"),
    STRING_WITH_LEN("🧶"),
    STRING_WITH_LEN("🐟"),
    STRING_WITH_LEN("🐟"),
    STRING_WITH_LEN("🐟"),
    STRING_WITH_LEN("🥺"),
    STRING_WITH_LEN("🥺"),
    STRING_WITH_LEN("🥺"),
    STRING_WITH_LEN("🐾"),
    STRING_WITH_LEN("🐾"),
    STRING_WITH_LEN("🐾"),
    STRING_WITH_LEN("✨"),
    STRING_WITH_LEN("✨"),
    STRING_WITH_LEN("💤"),
    STRING_WITH_LEN("💤")
};

// This is easier than figuring out how to support dynamically-allocated strings from itoa
static string_with_len numbered_list_items[] = {
    STRING_WITH_LEN("1. "),
    STRING_WITH_LEN("2. "),
    STRING_WITH_LEN("3. "),
    STRING_WITH_LEN("4. "),
    STRING_WITH_LEN("5. "),
    STRING_WITH_LEN("6. "),
    STRING_WITH_LEN("7. "),
    STRING_WITH_LEN("8. "),
    STRING_WITH_LEN("9. "),
};

static string_with_len lettered_list_items[] = {
    STRING_WITH_LEN("a. "),
    STRING_WITH_LEN("b. "),
    STRING_WITH_LEN("c. "),
    STRING_WITH_LEN("d. "),
    STRING_WITH_LEN("e. "),
    STRING_WITH_LEN("f. "),
    STRING_WITH_LEN("g. "),
    STRING_WITH_LEN("h. "),
    STRING_WITH_LEN("i. "),
};

static string_with_len code_verbs[] = {
    STRING_WITH_LEN("knock_over"),
    STRING_WITH_LEN("sit_on"),
    STRING_WITH_LEN("sleep_on"),
    STRING_WITH_LEN("stare_at"),
    STRING_WITH_LEN("paw_at"),
    STRING_WITH_LEN("chase"),
    STRING_WITH_LEN("eat"),
    STRING_WITH_LEN("hide_in"),
    STRING_WITH_LEN("jump_on"),
    STRING_WITH_LEN("ignore"),
    STRING_WITH_LEN("sniff"),
    STRING_WITH_LEN("bite"),
    STRING_WITH_LEN("scratch"),
    STRING_WITH_LEN("push_off"),
    STRING_WITH_LEN("attack"),
    STRING_WITH_LEN("hunt"),
    STRING_WITH_LEN("steal"),
    STRING_WITH_LEN("pounce_on"),
    STRING_WITH_LEN("knead"),
    STRING_WITH_LEN("hiss_at"),
    STRING_WITH_LEN("meow_at"),
    STRING_WITH_LEN("purr_at")
};

static string_with_len code_nouns[] = {
    STRING_WITH_LEN("yarn"),
    STRING_WITH_LEN("keyboard"),
    STRING_WITH_LEN("laptop"),
    STRING_WITH_LEN("box"),
    STRING_WITH_LEN("sunbeam"),
    STRING_WITH_LEN("curtain"),
    STRING_WITH_LEN("treats"),
    STRING_WITH_LEN("fish"),
    STRING_WITH_LEN("mouse"),
    STRING_WITH_LEN("laser"),
    STRING_WITH_LEN("toy"),
    STRING_WITH_LEN("food"),
    STRING_WITH_LEN("water"),
    STRING_WITH_LEN("leg"),
    STRING_WITH_LEN("door"),
    STRING_WITH_LEN("bag"),
    STRING_WITH_LEN("blanket"),
    STRING_WITH_LEN("couch"),
    STRING_WITH_LEN("table"),
    STRING_WITH_LEN("shelf"),
    STRING_WITH_LEN("counter"),
    STRING_WITH_LEN("plant"),
    STRING_WITH_LEN("sock"),
    STRING_WITH_LEN("hair_tie"),
    STRING_WITH_LEN("bug"),
    STRING_WITH_LEN("bird"),
    STRING_WITH_LEN("tail"),
    STRING_WITH_LEN("tummy")
};

// mrrrrpmreowmewmewnya
static void uwu_op_catgirl_nonsense(uwu_state* state) {
    uwu_random_number len = uwu_random_range(state, 10, 40);
    uwu_push_op(state, CREATE_PRINT_STRING("nya"));
    uwu_push_op(state, CREATE_MARKOV(catnonsense_table, catnonsense_table.initial_ngram, len));
    uwu_push_op(state, CREATE_PRINT_STRING("mr"));
}

// m r+ p
static void uwu_op_mrrp(uwu_state* state) {
    uwu_random_number repeats = uwu_random_range(state, 2, 9);
    uwu_push_op(state, CREATE_PRINT_STRING("p"));
    uwu_push_op(state, CREATE_REPEAT_CHARACTER('r', repeats));
    uwu_push_op(state, CREATE_PRINT_STRING("m"));
}
// m r* e* o+ w
static void uwu_op_meow(uwu_state* state) {
    uwu_random_number has_r = uwu_random_int(state) % 2;
    uwu_random_number repeats_r = uwu_random_geom(state, 0.65) + has_r;
    uwu_random_number has_a = uwu_random_int(state) % 4 == 0 && repeats_r > 0;
    uwu_random_number repeats_e_a = uwu_random_geom(state, 0.6) + (1 - has_r);
    uwu_random_number repeats_o = uwu_random_geom(state, 0.6) + 1;
    uwu_push_op(state, CREATE_PRINT_STRING("w"));
    uwu_push_op(state, CREATE_REPEAT_CHARACTER('o', repeats_o));
    if (repeats_e_a > 0) uwu_push_op(state, CREATE_REPEAT_CHARACTER(has_a ? 'a' : 'e', repeats_e_a));
    if (repeats_r > 0) uwu_push_op(state, CREATE_REPEAT_CHARACTER('r', repeats_r));
    uwu_push_op(state, CREATE_PRINT_STRING("m"));
}
// ny a+
static void uwu_op_nya(uwu_state* state) {
    uwu_random_number repeats = uwu_random_range(state, 1, 8);
    uwu_push_op(state, CREATE_REPEAT_CHARACTER('a', repeats));
    uwu_push_op(state, CREATE_PRINT_STRING("ny"));
}

// >///////<
static void uwu_op_blush(uwu_state* state) {
    uwu_random_number repeats = uwu_random_range(state, 3, 8);
    uwu_push_op(state, CREATE_PRINT_STRING("<"));
    uwu_push_op(state, CREATE_REPEAT_CHARACTER('/', repeats));
    uwu_push_op(state, CREATE_PRINT_STRING(">"));
}
// :3 c?
static void uwu_op_smiley(uwu_state* state) {
    if (uwu_random_int(state) % 10 == 0) {
        uwu_push_op(state, CREATE_PRINT_STRING("c"));
    }
    uwu_push_op(state, CREATE_PRINT_STRING(":3"));
}
// u? we h+
static void uwu_op_uweh(uwu_state* state) {
    uwu_random_number repeats = uwu_random_range(state, 1, 7);
    uwu_push_op(state, CREATE_REPEAT_CHARACTER('h', repeats));
    uwu_push_op(state, CREATE_PRINT_STRING("we"));
    if (uwu_random_int(state) % 2 == 0) uwu_push_op(state, CREATE_PRINT_STRING("u"));
}
// ble h+
static void uwu_op_bleh(uwu_state* state) {
    uwu_random_number repeats = uwu_random_range(state, 1, 7);
    uwu_push_op(state, CREATE_REPEAT_CHARACTER('h', repeats));
    uwu_push_op(state, CREATE_PRINT_STRING("ble"));
}

// random action
static void uwu_op_actions(uwu_state* state) {
    uwu_random_number action_rand = uwu_random_int(state);
    uwu_push_op(state, CREATE_PICK_STRING(actions, action_rand));
}

// random kaomoji
static void uwu_op_faces(uwu_state* state) {
    uwu_random_number face_rand = uwu_random_int(state);
    uwu_push_op(state, CREATE_PICK_STRING(faces, face_rand));
}
// Markov keyboard mash hjfgsjfsdfjsfd
static void uwu_op_keyboard_mash(uwu_state* state) {
    uwu_random_number len = uwu_random_range(state, 7, 40);
    uwu_random_number start_ngram = uwu_random_int(state) % keysmash_table.num_ngrams;
    uwu_push_op(state, CREATE_MARKOV(keysmash_table, start_ngram, len));
}

// Words that can start and end sentences (punctuation and kaomoji characters look awkward together)
static uwu_op_factory* uwu_op_table_alpha_words[] = {
    uwu_op_meow,
    uwu_op_meow,
    uwu_op_meow,
    uwu_op_nya,
    uwu_op_nya,
    uwu_op_mrrp,
    uwu_op_mrrp,
    uwu_op_uweh,
    uwu_op_bleh
};

// All words
static uwu_op_factory* uwu_op_table_words[] = {
    uwu_op_catgirl_nonsense,
    uwu_op_mrrp,
    uwu_op_meow,
    uwu_op_meow,
    uwu_op_meow,
    uwu_op_meow,
    uwu_op_meow,
    uwu_op_meow,
    uwu_op_meow,
    uwu_op_meow,
    uwu_op_meow,
    uwu_op_nya,
    uwu_op_nya,
    uwu_op_nya,
    uwu_op_blush,
    uwu_op_smiley,
    uwu_op_smiley,
    uwu_op_uweh,
    uwu_op_bleh,
    uwu_op_actions,
    uwu_op_faces,
    uwu_op_faces,
    uwu_op_faces,
    uwu_op_keyboard_mash
};

// Short punchy phrase generation (not auto-capitalized)
static void uwu_op_punchy_word(uwu_state* state) {
    uwu_op_factory* factory = uwu_op_table_words[uwu_random_int(state) % ARRAY_SIZE(uwu_op_table_words)];
    uwu_push_op(state, CREATE_REPEAT_CHARACTER(' ', 1));
    uwu_push_op(state, CREATE_GENERATE(factory, 1));
}
static void uwu_op_punchy_phrase(uwu_state* state) {
    uwu_op_factory* starter_factory = uwu_op_table_alpha_words[uwu_random_int(state) % ARRAY_SIZE(uwu_op_table_alpha_words)];
    uwu_op_factory* ender_factory = uwu_op_table_alpha_words[uwu_random_int(state) % ARRAY_SIZE(uwu_op_table_alpha_words)];
    uwu_random_number phrase_len = uwu_random_range(state, 1, 7);

    uwu_push_op(state, CREATE_GENERATE(ender_factory, 1));
    uwu_push_op(state, CREATE_GENERATE(uwu_op_punchy_word, phrase_len));
    uwu_push_op(state, CREATE_REPEAT_CHARACTER(' ', 1));
    uwu_push_op(state, CREATE_GENERATE(starter_factory, 1));
}

// Sentence phrase (punchy phrase that may be bolded; has punctuation afterwards)
static void uwu_op_sentence_phrase(uwu_state* state) {
    uwu_random_number bold_or_ital = uwu_random_int(state) % 20;

    if (uwu_random_int(state) % 3 == 0) {
        uwu_random_number punct_idx = uwu_random_int(state);
        uwu_push_op(state, CREATE_PICK_STRING(phrase_punctuation, punct_idx));
    } else {
        uwu_push_op(state, CREATE_REPEAT_CHARACTER(' ', 1));
    }

    if (bold_or_ital < 2) {
        uwu_push_op(state, CREATE_REPEAT_CHARACTER('*', bold_or_ital + 1));
        uwu_push_op(state, CREATE_GENERATE(uwu_op_punchy_phrase, 1));
        uwu_push_op(state, CREATE_REPEAT_CHARACTER('*', bold_or_ital + 1));
    } else {
        uwu_push_op(state, CREATE_GENERATE(uwu_op_punchy_phrase, 1));
    }
}

// Random emoji
static void uwu_op_emoji(uwu_state* state) {
    uwu_random_number idx = uwu_random_int(state);
    uwu_push_op(state, CREATE_PICK_STRING(emojis, idx));
}

// Title-case word for the middle of a header
static void uwu_op_header_word(uwu_state* state) {
    uwu_op_factory* factory = uwu_op_table_words[uwu_random_int(state) % ARRAY_SIZE(uwu_op_table_words)];
    uwu_push_op(state, CREATE_REPEAT_CHARACTER(' ', 1));
    uwu_push_op(state, CREATE_GENERATE(factory, 1));
    uwu_push_op(state, CREATE_CAPITALIZE_NEXT());
}

// Short, punchy phrase for a header
static void uwu_op_header_phrase(uwu_state* state) {
    uwu_op_factory* starter_factory = uwu_op_table_alpha_words[uwu_random_int(state) % ARRAY_SIZE(uwu_op_table_alpha_words)];
    uwu_op_factory* ender_factory = uwu_op_table_alpha_words[uwu_random_int(state) % ARRAY_SIZE(uwu_op_table_alpha_words)];
    uwu_random_number phrase_len = uwu_random_range(state, 1, 7);

    uwu_push_op(state, CREATE_GENERATE(ender_factory, 1));
    uwu_push_op(state, CREATE_CAPITALIZE_NEXT());
    uwu_push_op(state, CREATE_GENERATE(uwu_op_header_word, phrase_len));
    uwu_push_op(state, CREATE_REPEAT_CHARACTER(' ', 1));
    uwu_push_op(state, CREATE_GENERATE(starter_factory, 1));
    uwu_push_op(state, CREATE_CAPITALIZE_NEXT());
}

// Complete sentence (auto-capitalized, may start with a bolded punchy phrase)
static void uwu_op_sentence(uwu_state* state) {
    uwu_op_factory* starter_factory = uwu_op_table_alpha_words[uwu_random_int(state) % ARRAY_SIZE(uwu_op_table_alpha_words)];
    uwu_op_factory* ender_factory = uwu_op_table_alpha_words[uwu_random_int(state) % ARRAY_SIZE(uwu_op_table_alpha_words)];
    uwu_random_number end_punct = uwu_random_int(state);
    uwu_random_number sentence_len = uwu_random_geom(state, 0.5);

    uwu_push_op(state, CREATE_PICK_STRING(sentence_finishers, end_punct));
    uwu_push_op(state, CREATE_GENERATE(ender_factory, 1));
    uwu_push_op(state, CREATE_GENERATE(uwu_op_sentence_phrase, sentence_len));
    uwu_push_op(state, CREATE_REPEAT_CHARACTER(' ', 1));
    uwu_push_op(state, CREATE_GENERATE(starter_factory, 1));
    uwu_push_op(state, CREATE_CAPITALIZE_NEXT());

    bool start_with_bold_phrase = uwu_random_int(state) % 5 == 0;
    if (start_with_bold_phrase) {
        uwu_random_number end_punct = uwu_random_int(state);
        uwu_push_op(state, CREATE_REPEAT_CHARACTER(' ', 1));
        uwu_push_op(state, CREATE_PRINT_STRING("**"));
        uwu_push_op(state, CREATE_PICK_STRING(sentence_finishers, end_punct));
        uwu_push_op(state, CREATE_GENERATE(uwu_op_punchy_phrase, 1));
        uwu_push_op(state, CREATE_CAPITALIZE_NEXT());
        uwu_push_op(state, CREATE_PRINT_STRING("**"));
    }
}

// Sentence mid-paragraph. Just uwu_op_sentence with a space afterwards.
static void uwu_op_paragraph_sentence(uwu_state* state) {
    uwu_push_op(state, CREATE_REPEAT_CHARACTER(' ', 1));
    uwu_push_op(state, CREATE_GENERATE(uwu_op_sentence, 1));
}

// Paragraph.
static void uwu_op_paragraph(uwu_state* state) {
    uwu_random_number para_len = uwu_random_geom(state, 0.35);

    uwu_push_op(state, CREATE_REPEAT_CHARACTER('\n', 2));
    uwu_push_op(state, CREATE_GENERATE(uwu_op_sentence, 1));
    uwu_push_op(state, CREATE_GENERATE(uwu_op_paragraph_sentence, para_len));
}

// Heading with a random nesting depth
static void uwu_op_heading(uwu_state* state) {
    uwu_random_number heading_depth = uwu_random_geom(state, 0.5) + 1;
    bool use_emoji = uwu_random_int(state) % 3 == 0;

    uwu_push_op(state, CREATE_PRINT_STRING("\n\n"));
    uwu_push_op(state, CREATE_GENERATE(uwu_op_header_phrase, 1));
    if (use_emoji) {
        uwu_random_number emoji_rand = uwu_random_int(state);
        uwu_push_op(state, CREATE_REPEAT_CHARACTER(' ', 1));
        uwu_push_op(state, CREATE_PICK_STRING(emojis, emoji_rand));
    }
    uwu_push_op(state, CREATE_REPEAT_CHARACTER(' ', 1));
    uwu_push_op(state, CREATE_REPEAT_CHARACTER('#', heading_depth));
}

typedef struct {
    uint16_t counter;
    uint16_t indentation;
} uwu_list_state;
static void list_helper(uwu_state* state, uint16_t indentation, uwu_random_number num_points);

// Helper for a list item which may be numbered or bulleted, have an emoji, and/or start with a bolded key term
static inline void list_item(uwu_state* state, bool is_numbered, bool has_emoji, bool has_bold_term) {
    uint8_t current_op = state->current_op;

    uwu_list_state list_state;
    uwu_get_side_data(state, current_op, &list_state);

    bool create_sublist = uwu_random_int(state) % 10 == 0;
    if (create_sublist) {
        list_helper(state, list_state.indentation + 1, uwu_random_range(state, 1, 4));
    }

    uwu_push_op(state, CREATE_PRINT_STRING("\n"));
    uwu_push_op(state, CREATE_GENERATE(uwu_op_sentence, 1));
    if (has_bold_term) {
        uwu_push_op(state, CREATE_PRINT_STRING("**: "));
        uwu_push_op(state, CREATE_GENERATE(uwu_op_punchy_phrase, 1));
        uwu_push_op(state, CREATE_CAPITALIZE_NEXT());
        uwu_push_op(state, CREATE_PRINT_STRING("**"));
    }
    if (has_emoji) {
        uwu_random_number emoji_rand = uwu_random_int(state);
        uwu_push_op(state, CREATE_REPEAT_CHARACTER(' ', 1));
        uwu_push_op(state, CREATE_PICK_STRING(emojis, emoji_rand));
    }

    if (is_numbered) {
        uint32_t point_idx = list_state.counter - 1;
        list_state.counter++;
        uwu_set_side_data(state, current_op, &list_state);

        string_with_len* items_arr = list_state.indentation % 2 == 0 ? numbered_list_items : lettered_list_items;
        string_with_len point_str = items_arr[point_idx >= ARRAY_SIZE(numbered_list_items) ? ARRAY_SIZE(numbered_list_items) - 1 : point_idx];
        uwu_push_op(state, (uwu_op){
            .opcode = UWU_PRINT_STRING,
            .state = {
                .print_string = {
                    .string = point_str.string,
                    .remaining_chars = point_str.len,
                }
            }
        });
    } else {
        uwu_push_op(state, CREATE_PRINT_STRING("- "));
    }
    if (list_state.indentation > 0) {
        uwu_push_op(state, CREATE_REPEAT_CHARACTER(' ', list_state.indentation * 2));
    }
}

static void uwu_op_bullet_point(uwu_state* state) {
    list_item(state, false, false, false);
}

static void uwu_op_bullet_point_slop(uwu_state* state) {
    list_item(state, false, false, true);
}

static void uwu_op_bullet_point_slop_emoji(uwu_state* state) {
    list_item(state, false, true, true);
}

static void uwu_op_numbered_point(uwu_state* state) {
    list_item(state, true, false, false);
}

static void uwu_op_numbered_point_slop(uwu_state* state) {
    list_item(state, true, false, true);
}

static void uwu_op_numbered_point_slop_emoji(uwu_state* state) {
    list_item(state, true, true, true);
}

static uwu_op_factory* list_item_factories[] = {
    uwu_op_bullet_point,
    uwu_op_bullet_point_slop,
    uwu_op_bullet_point_slop_emoji,
    uwu_op_numbered_point,
    uwu_op_numbered_point_slop,
    uwu_op_numbered_point_slop_emoji,
};

// Markdown list (either numbered or non-numbered). All items may start with a bolded key phrase, and if so, may also start with an emoji.
static void list_helper(uwu_state* state, uint16_t indentation, uwu_random_number num_points) {
    bool is_numbered = uwu_random_int(state) % 2 == 0;
    bool has_slop = uwu_random_int(state) % 2 == 0;
    bool has_emoji = has_slop && uwu_random_int(state) % 2 == 0;

    uwu_op_factory* factory = list_item_factories[
        is_numbered * 3 +
        has_slop +
        has_emoji
    ];

    uwu_push_op(state, CREATE_GENERATE(factory, num_points));
    uwu_list_state list_state = {
        .counter = 1,
        .indentation = indentation,
    };
    uwu_set_side_data(state, state->current_op, &list_state);
}

// Markdown list with an opener before it (top-level).
static void uwu_op_list_with_opener(uwu_state* state) {
    uwu_push_op(state, CREATE_PRINT_STRING("\n"));
    list_helper(state, 0, uwu_random_range(state, 3, 10));
    uwu_push_op(state, CREATE_PRINT_STRING(":\n"));
    uwu_push_op(state, CREATE_GENERATE(uwu_op_punchy_phrase, 1));
    uwu_push_op(state, CREATE_CAPITALIZE_NEXT());
}

typedef struct {
    /** Current indentation level. */
    uint8_t indentation;
    /** Index of the parent uwu_code_state in the side data table, which may also contain variable names. 255 if none. */
    uint8_t parent_frame;
    /** Noun-table indices of the variables defined in this frame. 255 if none. */
    uint8_t var_names[2];
} uwu_code_state;

static inline size_t get_var_names(uwu_state* state, uint8_t frame_idx, string_with_len** out_var_names, size_t out_var_names_len) {
    if (out_var_names_len == 0) return 0;
    size_t filled_count = 0;
    while (frame_idx != 255) {
        uwu_code_state state_frame;
        uwu_get_side_data(state, frame_idx, &state_frame);

        bool had_any_variables = false;
        for (size_t i = 0; i < 2; i++) {
            if (state_frame.var_names[i] == 255) {
                break;
            }
            had_any_variables = true;

            if (filled_count == out_var_names_len) {
                // We've filled all variable names; pick a random one to overwrite
                out_var_names[uwu_random_int(state) % out_var_names_len] = &code_nouns[state_frame.var_names[i]];
            } else {
                // Fill next variable name
                out_var_names[filled_count] = &code_nouns[state_frame.var_names[i]];
                filled_count++;
            }
        }

        frame_idx = state_frame.parent_frame;

        // 50% chance we keep looking in a parent frame if all variables are already filled. This means variables
        // from higher frames get exponentially less likely.
        if (filled_count == out_var_names_len && uwu_random_int(state) % 2 == 0 && had_any_variables) {
            break;
        }
    }
    return filled_count;
}

static inline void get_var_names_or_randomize(uwu_state* state, uint8_t frame_idx, string_with_len** out_var_names, size_t out_var_names_len) {
    size_t filled_count = get_var_names(state, frame_idx, out_var_names, out_var_names_len);
    for (size_t i = filled_count; i < out_var_names_len; i++) {
        out_var_names[i] = &code_nouns[uwu_random_int(state) % ARRAY_SIZE(code_nouns)];
    }
}

// Helper to print a verb-noun function name.
static void fn_name(uwu_state* state) {
    uwu_random_number rand_verb = uwu_random_int(state);
    uwu_random_number rand_noun = uwu_random_int(state);
    uwu_push_op(state, CREATE_PICK_STRING(code_nouns, rand_noun));
    uwu_push_op(state, CREATE_REPEAT_CHARACTER('_', 1));
    uwu_push_op(state, CREATE_PICK_STRING(code_verbs, rand_verb));
}

static void uwu_op_code_body_item(uwu_state* state);
static void uwu_op_code_expr(uwu_state* state);

static void uwu_op_code_var_assign(uwu_state* state) {
    uwu_code_state frame_state;
    uint8_t frame_idx = state->current_op;
    uwu_get_side_data(state, frame_idx, &frame_state);
    if (frame_state.parent_frame != 255) {
        frame_idx = frame_state.parent_frame;
        uwu_get_side_data(state, frame_idx, &frame_state);
    }
    bool did_set = false;
    uint8_t noun_idx = 255;
    for (int i = 0; i < 2; i++) {
        if (frame_state.var_names[i] == 255) {
            noun_idx = uwu_random_int(state) % ARRAY_SIZE(code_nouns);
            frame_state.var_names[i] = noun_idx;
            did_set = true;
            break;
        }
    }
    if (!did_set) {
        noun_idx = uwu_random_int(state) % ARRAY_SIZE(code_nouns);
        // Both variable name slots are taken; overwrite a random one.
        frame_state.var_names[uwu_random_int(state) % 2] = noun_idx;
    }
    uwu_set_side_data(state, frame_idx, &frame_state);

    uwu_push_op(state, CREATE_PRINT_STRING("\n"));
    uwu_push_op(state, CREATE_GENERATE(uwu_op_code_expr, 1));
    uwu_code_state expr_frame = {
        .indentation = frame_state.indentation,
        .parent_frame = frame_idx,
        .var_names = {255, 255}
    };
    uwu_set_side_data(state, state->current_op, &expr_frame);
    uwu_push_op(state, CREATE_PRINT_STRING(" = "));
    uwu_push_op(state, CREATE_PRINT_STRING_WITH_LEN(code_nouns[noun_idx]));
    uwu_push_op(state, CREATE_REPEAT_CHARACTER(' ', frame_state.indentation * 4));
}

const double BODY_LEN_P = 0.5;
const double BODY_LEN_P_ADJUST = -0.06;
const double BODY_LEN_MIN_P = 0.2;

static inline uwu_random_number code_body_len(uwu_state* state, uwu_random_number indentation) {
    double p = BODY_LEN_P + (BODY_LEN_P_ADJUST * indentation);
    if (p < BODY_LEN_MIN_P) p = BODY_LEN_MIN_P;
    return uwu_random_geom(state, p);
}

static void uwu_op_code_loop(uwu_state* state) {
    uwu_code_state frame_state;
    uint8_t frame_idx = state->current_op;
    uwu_get_side_data(state, frame_idx, &frame_state);

    bool do_enumerate = uwu_random_int(state) % 2 == 0;
    uint8_t iter_subj = uwu_random_int(state) % ARRAY_SIZE(code_nouns);

    string_with_len* iteratees[2] = {0};
    get_var_names_or_randomize(state, frame_idx, iteratees, do_enumerate ? 2 : 1);

    uint8_t noun_1 = uwu_random_int(state) % ARRAY_SIZE(code_nouns);
    uint8_t noun_2 = do_enumerate ? uwu_random_int(state) % ARRAY_SIZE(code_nouns) : 255;
    uwu_random_number body_len = code_body_len(state, frame_state.indentation);

    uwu_push_op(state, CREATE_GENERATE(uwu_op_code_body_item, body_len));
    uwu_code_state child_frame = {
        .indentation = frame_state.indentation + 1,
        .parent_frame = frame_idx,
        .var_names = {iter_subj, 255}
    };
    uwu_set_side_data(state, state->current_op, &child_frame);

    uwu_push_op(state, CREATE_PRINT_STRING(":\n"));
    if (do_enumerate) {
        uwu_push_op(state, CREATE_PRINT_STRING_WITH_LEN(code_nouns[iter_subj]));
        uwu_push_op(state, CREATE_PRINT_STRING(") bap "));
        uwu_push_op(state, CREATE_PRINT_STRING_WITH_LEN(code_nouns[noun_1]));
        uwu_push_op(state, CREATE_PRINT_STRING(", "));
        uwu_push_op(state, CREATE_PRINT_STRING_WITH_LEN(code_nouns[noun_2]));
        uwu_push_op(state, CREATE_PRINT_STRING("mrrp ("));
    } else {
        uwu_push_op(state, CREATE_PRINT_STRING_WITH_LEN(code_nouns[iter_subj]));
        uwu_push_op(state, CREATE_PRINT_STRING(" bap "));
        uwu_push_op(state, CREATE_PRINT_STRING_WITH_LEN(code_nouns[noun_1]));
        uwu_push_op(state, CREATE_PRINT_STRING("mrrp "));
    }

    uwu_push_op(state, CREATE_REPEAT_CHARACTER(' ', frame_state.indentation * 4));
}

static void uwu_op_code_if(uwu_state* state) {
    uwu_code_state frame_state;
    uint8_t frame_idx = state->current_op;
    uwu_get_side_data(state, frame_idx, &frame_state);
    string_with_len* var_names[4] = {0};
    uwu_random_number num_var_names = uwu_random_geom(state, 0.3) + 1;
    num_var_names = num_var_names > 4 ? 4 : num_var_names;
    num_var_names = get_var_names(state, frame_idx, var_names, num_var_names);
    if (num_var_names == 0) {
        get_var_names_or_randomize(state, frame_idx, var_names, 1);
        num_var_names = 1;
    }

    bool do_else = uwu_random_int(state) % 2 == 0;
    uwu_random_number body_len = code_body_len(state, frame_state.indentation);

    uwu_code_state child_frame = {
        .indentation = frame_state.indentation + 1,
        .parent_frame = frame_idx,
        .var_names = {255, 255}
    };

    if (do_else) {
        uwu_random_number else_body_len = code_body_len(state, frame_state.indentation);
        uwu_push_op(state, CREATE_GENERATE(uwu_op_code_body_item, else_body_len));
        uwu_set_side_data(state, state->current_op, &child_frame);
        uwu_push_op(state, CREATE_PRINT_STRING("uwah:\n"));
        uwu_push_op(state, CREATE_REPEAT_CHARACTER(' ', frame_state.indentation * 4));
    }

    uwu_push_op(state, CREATE_GENERATE(uwu_op_code_body_item, body_len));
    uwu_set_side_data(state, state->current_op, &child_frame);
    uwu_push_op(state, CREATE_PRINT_STRING(":\n"));
    for (int i = 0; i < num_var_names; i++) {
        if (i != 0) {
            if (uwu_random_int(state) % 2 == 0) {
                uwu_push_op(state, CREATE_PRINT_STRING(" n' "));
            } else {
                uwu_push_op(state, CREATE_PRINT_STRING(" or "));
            }
        }
        uwu_push_op(state, CREATE_PRINT_STRING_WITH_LEN(*var_names[i]));
    }
    uwu_push_op(state, CREATE_PRINT_STRING("weh "));
    uwu_push_op(state, CREATE_REPEAT_CHARACTER(' ', frame_state.indentation * 4));
}

static void uwu_op_fn_call_inline(uwu_state* state) {
    uwu_code_state frame_state;
    uint8_t frame_idx = state->current_op;
    uwu_get_side_data(state, frame_idx, &frame_state);
    string_with_len* var_names[4] = {0};
    uwu_random_number arity = uwu_random_geom(state, 0.5);
    arity = arity > 4 ? 4 : arity;
    arity = get_var_names(state, frame_idx, var_names, arity);

    uwu_push_op(state, CREATE_PRINT_STRING(")"));
    for (size_t i = 0; i < arity; i++) {
        if (i != 0) uwu_push_op(state, CREATE_PRINT_STRING(", "));
        uwu_push_op(state, CREATE_PRINT_STRING_WITH_LEN(*var_names[i]));
    }
    uwu_push_op(state, CREATE_PRINT_STRING("("));
    fn_name(state);
}

static void uwu_op_code_expr(uwu_state* state) {
    uwu_code_state frame_state;
    uint8_t frame_idx = state->current_op;
    uwu_get_side_data(state, frame_idx, &frame_state);

    uwu_code_state child_frame = {
        .indentation = frame_state.indentation + 1,
        .parent_frame = frame_idx,
        .var_names = {255, 255}
    };

    uwu_random_number expr_kind = uwu_random_int(state) % 7;
    switch (expr_kind) {
        case 0: {
            // Function call
            uwu_op_fn_call_inline(state);
            break;
        }
        case 1: {
            // Subscript
            string_with_len* var_name = NULL;
            get_var_names_or_randomize(state, frame_idx, &var_name, 1);

            uwu_push_op(state, CREATE_PRINT_STRING("]"));
            uwu_push_op(state, CREATE_GENERATE(uwu_op_code_expr, 1));
            uwu_set_side_data(state, state->current_op, &child_frame);
            uwu_push_op(state, CREATE_PRINT_STRING("["));
            uwu_push_op(state, CREATE_PRINT_STRING_WITH_LEN(*var_name));
            break;
        }
        case 2: {
            // String literal
            uwu_push_op(state, CREATE_PRINT_STRING("\""));
            uwu_push_op(state, CREATE_GENERATE(uwu_op_punchy_phrase, 1));
            uwu_push_op(state, CREATE_PRINT_STRING("\""));
            break;
        }
        case 3: {
            // Binary op
            uwu_random_number op_kind = uwu_random_int(state) % 9;
            string_with_len op;
            switch (op_kind) {
                case 0: op = STRING_WITH_LEN(" - "); break;
                case 1: op = STRING_WITH_LEN(" * "); break;
                case 2: op = STRING_WITH_LEN(" ^ "); break;
                default: op = STRING_WITH_LEN(" + "); break;
            }
            uwu_push_op(state, CREATE_GENERATE(uwu_op_code_expr, 1));
            uwu_set_side_data(state, state->current_op, &child_frame);
            uwu_push_op(state, CREATE_PRINT_STRING_WITH_LEN(op));
            uwu_push_op(state, CREATE_GENERATE(uwu_op_code_expr, 1));
            uwu_set_side_data(state, state->current_op, &child_frame);
            break;
        }
        default: {
            // Variable access
            string_with_len* var_name = NULL;
            get_var_names_or_randomize(state, frame_idx, &var_name, 1);
            uwu_push_op(state, CREATE_PRINT_STRING_WITH_LEN(*var_name));
            break;
        }
    }
}

static void uwu_op_code_body_item(uwu_state* state) {
    uwu_code_state frame_state;
    uint8_t frame_idx = state->current_op;
    uwu_get_side_data(state, frame_idx, &frame_state);
    uint8_t pushed_op_idx = 255;
    bool is_compound = uwu_random_int(state) % ((uwu_random_number)frame_state.indentation * (uwu_random_number)frame_state.indentation + 1) == 0;
    if (is_compound) {
        uwu_random_number stmt_kind = uwu_random_int(state) % 2;
        switch (stmt_kind) {
            case 0: {
                // Loop
                uwu_push_op(state, CREATE_GENERATE(uwu_op_code_loop, 1));
                pushed_op_idx = state->current_op;
                break;
            }
            case 1: {
                // If/else
                uwu_push_op(state, CREATE_GENERATE(uwu_op_code_if, 1));
                pushed_op_idx = state->current_op;
                break;
            }
        }
    } else {
        uwu_random_number stmt_kind = uwu_random_int(state) % 6;
        switch (stmt_kind) {
            case 0:
            case 1:
            case 2: {
                // Variable assignment
                uwu_push_op(state, CREATE_GENERATE(uwu_op_code_var_assign, 1));
                pushed_op_idx = state->current_op;
                break;
            }
            case 3:
            case 4: {
                // Function call
                uwu_push_op(state, CREATE_PRINT_STRING("\n"));
                uwu_push_op(state, CREATE_GENERATE(uwu_op_fn_call_inline, 1));
                pushed_op_idx = state->current_op;
                uwu_push_op(state, CREATE_REPEAT_CHARACTER(' ', frame_state.indentation * 4));
                break;
            }
            case 5: {
                // Comment
                bool capitalize = uwu_random_int(state) % 2 == 0;

                uwu_push_op(state, CREATE_PRINT_STRING("\n"));
                uwu_push_op(state, CREATE_GENERATE(uwu_op_punchy_phrase, 1));
                if (capitalize) {
                    uwu_push_op(state, CREATE_CAPITALIZE_NEXT());
                }
                uwu_push_op(state, CREATE_PRINT_STRING("# "));
                uwu_push_op(state, CREATE_REPEAT_CHARACTER(' ', frame_state.indentation * 4));
            }
        }

    }

    uwu_code_state child_frame = {
        .indentation = frame_state.indentation,
        .parent_frame = frame_idx,
        .var_names = {255, 255}
    };
    if (pushed_op_idx != 255) uwu_set_side_data(state, pushed_op_idx, &child_frame);
}

static void uwu_op_fn_def(uwu_state* state) {
    uwu_random_number body_len = uwu_random_geom(state, 0.3) + 1;
    bool gen_docstring = body_len > 5;

    uwu_push_op(state, CREATE_GENERATE(uwu_op_code_body_item, body_len));
    uwu_code_state child_frame = {
        .indentation = 1,
        .parent_frame = 255,
        .var_names = {255, 255}
    };
    uwu_set_side_data(state, state->current_op, &child_frame);
    if (gen_docstring) {
        uwu_push_op(state, CREATE_PRINT_STRING("\"\"\"\n\n"));
        uwu_push_op(state, CREATE_GENERATE(uwu_op_punchy_phrase, 1));
        uwu_push_op(state, CREATE_CAPITALIZE_NEXT());
        uwu_push_op(state, CREATE_PRINT_STRING(":\n    \"\"\""));
    } else {
        uwu_push_op(state, CREATE_PRINT_STRING(":\n"));
    }
    fn_name(state);
    uwu_push_op(state, CREATE_PRINT_STRING("nya "));
    uwu_push_op(state, CREATE_PRINT_STRING("\n"));
}

static void uwu_op_code_block(uwu_state* state) {
    uwu_random_number body_len = uwu_random_geom(state, 0.6) + 1;

    uwu_push_op(state, CREATE_PRINT_STRING("```\n\n"));
    uwu_push_op(state, CREATE_GENERATE(uwu_op_fn_def, body_len));
    uwu_push_op(state, CREATE_PRINT_STRING("```"));
}

static uwu_op_factory* uwu_op_table_default[] = {
    uwu_op_heading,
    uwu_op_paragraph,
    uwu_op_paragraph,
    uwu_op_paragraph,
    uwu_op_paragraph,
    uwu_op_paragraph,
    uwu_op_list_with_opener,
    uwu_op_code_block
};

#endif
