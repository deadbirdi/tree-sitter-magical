#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 90
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 59
#define ALIAS_COUNT 0
#define TOKEN_COUNT 34
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 6

enum {
  anon_sym_card = 1,
  anon_sym_game = 2,
  anon_sym_extends = 3,
  anon_sym_deck = 4,
  anon_sym_zone = 5,
  anon_sym_action = 6,
  anon_sym_template = 7,
  anon_sym_mechanic = 8,
  anon_sym_win_condition = 9,
  anon_sym_player_state = 10,
  anon_sym_let = 11,
  anon_sym_const = 12,
  anon_sym_var = 13,
  anon_sym_EQ = 14,
  anon_sym_COMMA = 15,
  anon_sym_LBRACE = 16,
  anon_sym_RBRACE = 17,
  anon_sym_COLON = 18,
  anon_sym_LBRACK = 19,
  anon_sym_RBRACK = 20,
  anon_sym_LPAREN = 21,
  anon_sym_RPAREN = 22,
  anon_sym_DQUOTE = 23,
  aux_sym_string_literal_token1 = 24,
  aux_sym_string_literal_token2 = 25,
  anon_sym_SQUOTE = 26,
  aux_sym_string_literal_token3 = 27,
  sym_number_literal = 28,
  anon_sym_true = 29,
  anon_sym_false = 30,
  sym_identifier = 31,
  anon_sym_SLASH_SLASH = 32,
  aux_sym_line_comment_token1 = 33,
  sym_source_file = 34,
  sym__statement = 35,
  sym_card_definition = 36,
  sym_game_definition = 37,
  sym_deck_definition = 38,
  sym_zone_definition = 39,
  sym_action_definition = 40,
  sym_template_definition = 41,
  sym_mechanic_definition = 42,
  sym_win_condition_definition = 43,
  sym_player_state_definition = 44,
  sym_variable_declaration = 45,
  sym_object_literal = 46,
  sym_property = 47,
  sym_array_literal = 48,
  sym__expression = 49,
  sym_function_call = 50,
  sym_string_literal = 51,
  sym_boolean_literal = 52,
  sym_line_comment = 53,
  aux_sym_source_file_repeat1 = 54,
  aux_sym_object_literal_repeat1 = 55,
  aux_sym_array_literal_repeat1 = 56,
  aux_sym_string_literal_repeat1 = 57,
  aux_sym_string_literal_repeat2 = 58,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_card] = "card",
  [anon_sym_game] = "game",
  [anon_sym_extends] = "extends",
  [anon_sym_deck] = "deck",
  [anon_sym_zone] = "zone",
  [anon_sym_action] = "action",
  [anon_sym_template] = "template",
  [anon_sym_mechanic] = "mechanic",
  [anon_sym_win_condition] = "win_condition",
  [anon_sym_player_state] = "player_state",
  [anon_sym_let] = "let",
  [anon_sym_const] = "const",
  [anon_sym_var] = "var",
  [anon_sym_EQ] = "=",
  [anon_sym_COMMA] = ",",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_literal_token1] = "string_literal_token1",
  [aux_sym_string_literal_token2] = "string_literal_token2",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_literal_token3] = "string_literal_token3",
  [sym_number_literal] = "number_literal",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_identifier] = "identifier",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym_line_comment_token1] = "line_comment_token1",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_card_definition] = "card_definition",
  [sym_game_definition] = "game_definition",
  [sym_deck_definition] = "deck_definition",
  [sym_zone_definition] = "zone_definition",
  [sym_action_definition] = "action_definition",
  [sym_template_definition] = "template_definition",
  [sym_mechanic_definition] = "mechanic_definition",
  [sym_win_condition_definition] = "win_condition_definition",
  [sym_player_state_definition] = "player_state_definition",
  [sym_variable_declaration] = "variable_declaration",
  [sym_object_literal] = "object_literal",
  [sym_property] = "property",
  [sym_array_literal] = "array_literal",
  [sym__expression] = "_expression",
  [sym_function_call] = "function_call",
  [sym_string_literal] = "string_literal",
  [sym_boolean_literal] = "boolean_literal",
  [sym_line_comment] = "line_comment",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_object_literal_repeat1] = "object_literal_repeat1",
  [aux_sym_array_literal_repeat1] = "array_literal_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
  [aux_sym_string_literal_repeat2] = "string_literal_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_card] = anon_sym_card,
  [anon_sym_game] = anon_sym_game,
  [anon_sym_extends] = anon_sym_extends,
  [anon_sym_deck] = anon_sym_deck,
  [anon_sym_zone] = anon_sym_zone,
  [anon_sym_action] = anon_sym_action,
  [anon_sym_template] = anon_sym_template,
  [anon_sym_mechanic] = anon_sym_mechanic,
  [anon_sym_win_condition] = anon_sym_win_condition,
  [anon_sym_player_state] = anon_sym_player_state,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_const] = anon_sym_const,
  [anon_sym_var] = anon_sym_var,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_literal_token1] = aux_sym_string_literal_token1,
  [aux_sym_string_literal_token2] = aux_sym_string_literal_token2,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_literal_token3] = aux_sym_string_literal_token3,
  [sym_number_literal] = sym_number_literal,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_identifier] = sym_identifier,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym_line_comment_token1] = aux_sym_line_comment_token1,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_card_definition] = sym_card_definition,
  [sym_game_definition] = sym_game_definition,
  [sym_deck_definition] = sym_deck_definition,
  [sym_zone_definition] = sym_zone_definition,
  [sym_action_definition] = sym_action_definition,
  [sym_template_definition] = sym_template_definition,
  [sym_mechanic_definition] = sym_mechanic_definition,
  [sym_win_condition_definition] = sym_win_condition_definition,
  [sym_player_state_definition] = sym_player_state_definition,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym_object_literal] = sym_object_literal,
  [sym_property] = sym_property,
  [sym_array_literal] = sym_array_literal,
  [sym__expression] = sym__expression,
  [sym_function_call] = sym_function_call,
  [sym_string_literal] = sym_string_literal,
  [sym_boolean_literal] = sym_boolean_literal,
  [sym_line_comment] = sym_line_comment,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_object_literal_repeat1] = aux_sym_object_literal_repeat1,
  [aux_sym_array_literal_repeat1] = aux_sym_array_literal_repeat1,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
  [aux_sym_string_literal_repeat2] = aux_sym_string_literal_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_card] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_game] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extends] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_deck] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_zone] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_action] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_template] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mechanic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_win_condition] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_player_state] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_const] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_var] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_literal_token3] = {
    .visible = false,
    .named = false,
  },
  [sym_number_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_line_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_card_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_game_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_deck_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_zone_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_action_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_template_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_mechanic_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_win_condition_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_player_state_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_object_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_property] = {
    .visible = true,
    .named = true,
  },
  [sym_array_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_object_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_repeat2] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_body = 1,
  field_function = 2,
  field_key = 3,
  field_name = 4,
  field_template = 5,
  field_value = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_function] = "function",
  [field_key] = "key",
  [field_name] = "name",
  [field_template] = "template",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 3},
  [4] = {.index = 6, .length = 2},
  [5] = {.index = 8, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_body, 1},
  [1] =
    {field_body, 2},
    {field_name, 1},
  [3] =
    {field_body, 4},
    {field_name, 1},
    {field_template, 3},
  [6] =
    {field_key, 0},
    {field_value, 2},
  [8] =
    {field_function, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(81);
      if (lookahead == '"') ADVANCE(104);
      if (lookahead == '\'') ADVANCE(109);
      if (lookahead == '(') ADVANCE(102);
      if (lookahead == ')') ADVANCE(103);
      if (lookahead == ',') ADVANCE(96);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ':') ADVANCE(99);
      if (lookahead == '=') ADVANCE(95);
      if (lookahead == '[') ADVANCE(100);
      if (lookahead == '\\') ADVANCE(80);
      if (lookahead == ']') ADVANCE(101);
      if (lookahead == 'a') ADVANCE(16);
      if (lookahead == 'c') ADVANCE(8);
      if (lookahead == 'd') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(77);
      if (lookahead == 'f') ADVANCE(11);
      if (lookahead == 'g') ADVANCE(9);
      if (lookahead == 'l') ADVANCE(33);
      if (lookahead == 'm') ADVANCE(32);
      if (lookahead == 'p') ADVANCE(44);
      if (lookahead == 't') ADVANCE(31);
      if (lookahead == 'v') ADVANCE(12);
      if (lookahead == 'w') ADVANCE(37);
      if (lookahead == 'z') ADVANCE(56);
      if (lookahead == '{') ADVANCE(97);
      if (lookahead == '}') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(104);
      if (lookahead == '\'') ADVANCE(109);
      if (lookahead == ')') ADVANCE(103);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '[') ADVANCE(100);
      if (lookahead == ']') ADVANCE(101);
      if (lookahead == 'f') ADVANCE(119);
      if (lookahead == 't') ADVANCE(123);
      if (lookahead == '{') ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(104);
      if (lookahead == '\'') ADVANCE(109);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '}') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(104);
      if (lookahead == '/') ADVANCE(106);
      if (lookahead == '\\') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(107);
      if (lookahead != 0) ADVANCE(105);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(109);
      if (lookahead == '/') ADVANCE(111);
      if (lookahead == '\\') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(112);
      if (lookahead != 0) ADVANCE(110);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(127);
      END_STATE();
    case 6:
      if (lookahead == '_') ADVANCE(20);
      END_STATE();
    case 7:
      if (lookahead == '_') ADVANCE(66);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(61);
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(78);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(62);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(72);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(73);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(70);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(42);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(36);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(89);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(58);
      END_STATE();
    case 21:
      if (lookahead == 'd') ADVANCE(82);
      END_STATE();
    case 22:
      if (lookahead == 'd') ADVANCE(64);
      END_STATE();
    case 23:
      if (lookahead == 'd') ADVANCE(41);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(46);
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 36:
      if (lookahead == 'h') ADVANCE(13);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(19);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(74);
      END_STATE();
    case 42:
      if (lookahead == 'k') ADVANCE(85);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(10);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(14);
      END_STATE();
    case 46:
      if (lookahead == 'm') ADVANCE(60);
      END_STATE();
    case 47:
      if (lookahead == 'm') ADVANCE(24);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 49:
      if (lookahead == 'n') ADVANCE(6);
      END_STATE();
    case 50:
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 51:
      if (lookahead == 'n') ADVANCE(90);
      END_STATE();
    case 52:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 54:
      if (lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 56:
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 57:
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 58:
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 59:
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 60:
      if (lookahead == 'p') ADVANCE(45);
      END_STATE();
    case 61:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 62:
      if (lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 63:
      if (lookahead == 'r') ADVANCE(7);
      END_STATE();
    case 64:
      if (lookahead == 's') ADVANCE(84);
      END_STATE();
    case 65:
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 66:
      if (lookahead == 's') ADVANCE(75);
      END_STATE();
    case 67:
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 73:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 74:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 75:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 76:
      if (lookahead == 'u') ADVANCE(25);
      END_STATE();
    case 77:
      if (lookahead == 'x') ADVANCE(71);
      END_STATE();
    case 78:
      if (lookahead == 'y') ADVANCE(34);
      END_STATE();
    case 79:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      END_STATE();
    case 80:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(108);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_card);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_game);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_extends);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_deck);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_zone);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_action);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_template);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_mechanic);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_win_condition);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_player_state);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(127);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(105);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_string_literal_token3);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_string_literal_token3);
      if (lookahead == '/') ADVANCE(127);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_string_literal_token3);
      if (lookahead == '/') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(110);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(131);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '/') ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(131);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '/') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(131);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(131);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 129},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 2},
  [89] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_line_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_card] = ACTIONS(1),
    [anon_sym_game] = ACTIONS(1),
    [anon_sym_extends] = ACTIONS(1),
    [anon_sym_deck] = ACTIONS(1),
    [anon_sym_zone] = ACTIONS(1),
    [anon_sym_action] = ACTIONS(1),
    [anon_sym_template] = ACTIONS(1),
    [anon_sym_mechanic] = ACTIONS(1),
    [anon_sym_win_condition] = ACTIONS(1),
    [anon_sym_player_state] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_string_literal_token2] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_number_literal] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(87),
    [sym__statement] = STATE(32),
    [sym_card_definition] = STATE(31),
    [sym_game_definition] = STATE(31),
    [sym_deck_definition] = STATE(31),
    [sym_zone_definition] = STATE(31),
    [sym_action_definition] = STATE(31),
    [sym_template_definition] = STATE(31),
    [sym_mechanic_definition] = STATE(31),
    [sym_win_condition_definition] = STATE(31),
    [sym_player_state_definition] = STATE(31),
    [sym_variable_declaration] = STATE(31),
    [sym_line_comment] = STATE(1),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_card] = ACTIONS(7),
    [anon_sym_game] = ACTIONS(9),
    [anon_sym_deck] = ACTIONS(11),
    [anon_sym_zone] = ACTIONS(13),
    [anon_sym_action] = ACTIONS(15),
    [anon_sym_template] = ACTIONS(17),
    [anon_sym_mechanic] = ACTIONS(19),
    [anon_sym_win_condition] = ACTIONS(21),
    [anon_sym_player_state] = ACTIONS(23),
    [anon_sym_let] = ACTIONS(25),
    [anon_sym_const] = ACTIONS(25),
    [anon_sym_var] = ACTIONS(25),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_card,
    ACTIONS(9), 1,
      anon_sym_game,
    ACTIONS(11), 1,
      anon_sym_deck,
    ACTIONS(13), 1,
      anon_sym_zone,
    ACTIONS(15), 1,
      anon_sym_action,
    ACTIONS(17), 1,
      anon_sym_template,
    ACTIONS(19), 1,
      anon_sym_mechanic,
    ACTIONS(21), 1,
      anon_sym_win_condition,
    ACTIONS(23), 1,
      anon_sym_player_state,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_line_comment,
    STATE(3), 1,
      aux_sym_source_file_repeat1,
    STATE(32), 1,
      sym__statement,
    ACTIONS(25), 3,
      anon_sym_let,
      anon_sym_const,
      anon_sym_var,
    STATE(31), 10,
      sym_card_definition,
      sym_game_definition,
      sym_deck_definition,
      sym_zone_definition,
      sym_action_definition,
      sym_template_definition,
      sym_mechanic_definition,
      sym_win_condition_definition,
      sym_player_state_definition,
      sym_variable_declaration,
  [60] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      anon_sym_card,
    ACTIONS(34), 1,
      anon_sym_game,
    ACTIONS(37), 1,
      anon_sym_deck,
    ACTIONS(40), 1,
      anon_sym_zone,
    ACTIONS(43), 1,
      anon_sym_action,
    ACTIONS(46), 1,
      anon_sym_template,
    ACTIONS(49), 1,
      anon_sym_mechanic,
    ACTIONS(52), 1,
      anon_sym_win_condition,
    ACTIONS(55), 1,
      anon_sym_player_state,
    STATE(32), 1,
      sym__statement,
    STATE(3), 2,
      sym_line_comment,
      aux_sym_source_file_repeat1,
    ACTIONS(58), 3,
      anon_sym_let,
      anon_sym_const,
      anon_sym_var,
    STATE(31), 10,
      sym_card_definition,
      sym_game_definition,
      sym_deck_definition,
      sym_zone_definition,
      sym_action_definition,
      sym_template_definition,
      sym_mechanic_definition,
      sym_win_condition_definition,
      sym_player_state_definition,
      sym_variable_declaration,
  [118] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(4), 1,
      sym_line_comment,
    ACTIONS(61), 20,
      ts_builtin_sym_end,
      anon_sym_card,
      anon_sym_game,
      anon_sym_extends,
      anon_sym_deck,
      anon_sym_zone,
      anon_sym_action,
      anon_sym_template,
      anon_sym_mechanic,
      anon_sym_win_condition,
      anon_sym_player_state,
      anon_sym_let,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [147] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(5), 1,
      sym_line_comment,
    ACTIONS(63), 20,
      ts_builtin_sym_end,
      anon_sym_card,
      anon_sym_game,
      anon_sym_extends,
      anon_sym_deck,
      anon_sym_zone,
      anon_sym_action,
      anon_sym_template,
      anon_sym_mechanic,
      anon_sym_win_condition,
      anon_sym_player_state,
      anon_sym_let,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [176] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      sym_line_comment,
    ACTIONS(65), 17,
      ts_builtin_sym_end,
      anon_sym_card,
      anon_sym_game,
      anon_sym_deck,
      anon_sym_zone,
      anon_sym_action,
      anon_sym_template,
      anon_sym_mechanic,
      anon_sym_win_condition,
      anon_sym_player_state,
      anon_sym_let,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [205] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(7), 1,
      sym_line_comment,
    ACTIONS(69), 17,
      ts_builtin_sym_end,
      anon_sym_card,
      anon_sym_game,
      anon_sym_deck,
      anon_sym_zone,
      anon_sym_action,
      anon_sym_template,
      anon_sym_mechanic,
      anon_sym_win_condition,
      anon_sym_player_state,
      anon_sym_let,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [231] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(8), 1,
      sym_line_comment,
    ACTIONS(71), 17,
      ts_builtin_sym_end,
      anon_sym_card,
      anon_sym_game,
      anon_sym_deck,
      anon_sym_zone,
      anon_sym_action,
      anon_sym_template,
      anon_sym_mechanic,
      anon_sym_win_condition,
      anon_sym_player_state,
      anon_sym_let,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [257] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(9), 1,
      sym_line_comment,
    ACTIONS(73), 17,
      ts_builtin_sym_end,
      anon_sym_card,
      anon_sym_game,
      anon_sym_deck,
      anon_sym_zone,
      anon_sym_action,
      anon_sym_template,
      anon_sym_mechanic,
      anon_sym_win_condition,
      anon_sym_player_state,
      anon_sym_let,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [283] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(10), 1,
      sym_line_comment,
    ACTIONS(75), 17,
      ts_builtin_sym_end,
      anon_sym_card,
      anon_sym_game,
      anon_sym_deck,
      anon_sym_zone,
      anon_sym_action,
      anon_sym_template,
      anon_sym_mechanic,
      anon_sym_win_condition,
      anon_sym_player_state,
      anon_sym_let,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [309] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(11), 1,
      sym_line_comment,
    ACTIONS(77), 17,
      ts_builtin_sym_end,
      anon_sym_card,
      anon_sym_game,
      anon_sym_deck,
      anon_sym_zone,
      anon_sym_action,
      anon_sym_template,
      anon_sym_mechanic,
      anon_sym_win_condition,
      anon_sym_player_state,
      anon_sym_let,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [335] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(12), 1,
      sym_line_comment,
    ACTIONS(79), 17,
      ts_builtin_sym_end,
      anon_sym_card,
      anon_sym_game,
      anon_sym_deck,
      anon_sym_zone,
      anon_sym_action,
      anon_sym_template,
      anon_sym_mechanic,
      anon_sym_win_condition,
      anon_sym_player_state,
      anon_sym_let,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [361] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(13), 1,
      sym_line_comment,
    ACTIONS(81), 17,
      ts_builtin_sym_end,
      anon_sym_card,
      anon_sym_game,
      anon_sym_deck,
      anon_sym_zone,
      anon_sym_action,
      anon_sym_template,
      anon_sym_mechanic,
      anon_sym_win_condition,
      anon_sym_player_state,
      anon_sym_let,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [387] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(14), 1,
      sym_line_comment,
    ACTIONS(83), 17,
      ts_builtin_sym_end,
      anon_sym_card,
      anon_sym_game,
      anon_sym_deck,
      anon_sym_zone,
      anon_sym_action,
      anon_sym_template,
      anon_sym_mechanic,
      anon_sym_win_condition,
      anon_sym_player_state,
      anon_sym_let,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [413] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(15), 1,
      sym_line_comment,
    ACTIONS(85), 17,
      ts_builtin_sym_end,
      anon_sym_card,
      anon_sym_game,
      anon_sym_deck,
      anon_sym_zone,
      anon_sym_action,
      anon_sym_template,
      anon_sym_mechanic,
      anon_sym_win_condition,
      anon_sym_player_state,
      anon_sym_let,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [439] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(16), 1,
      sym_line_comment,
    ACTIONS(87), 17,
      ts_builtin_sym_end,
      anon_sym_card,
      anon_sym_game,
      anon_sym_deck,
      anon_sym_zone,
      anon_sym_action,
      anon_sym_template,
      anon_sym_mechanic,
      anon_sym_win_condition,
      anon_sym_player_state,
      anon_sym_let,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [465] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(17), 1,
      sym_line_comment,
    ACTIONS(89), 17,
      ts_builtin_sym_end,
      anon_sym_card,
      anon_sym_game,
      anon_sym_deck,
      anon_sym_zone,
      anon_sym_action,
      anon_sym_template,
      anon_sym_mechanic,
      anon_sym_win_condition,
      anon_sym_player_state,
      anon_sym_let,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [491] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(18), 1,
      sym_line_comment,
    ACTIONS(91), 17,
      ts_builtin_sym_end,
      anon_sym_card,
      anon_sym_game,
      anon_sym_deck,
      anon_sym_zone,
      anon_sym_action,
      anon_sym_template,
      anon_sym_mechanic,
      anon_sym_win_condition,
      anon_sym_player_state,
      anon_sym_let,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [517] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(19), 1,
      sym_line_comment,
    ACTIONS(65), 17,
      ts_builtin_sym_end,
      anon_sym_card,
      anon_sym_game,
      anon_sym_deck,
      anon_sym_zone,
      anon_sym_action,
      anon_sym_template,
      anon_sym_mechanic,
      anon_sym_win_condition,
      anon_sym_player_state,
      anon_sym_let,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [543] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(93), 1,
      anon_sym_LBRACE,
    ACTIONS(95), 1,
      anon_sym_LBRACK,
    ACTIONS(97), 1,
      anon_sym_RBRACK,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      sym_number_literal,
    ACTIONS(107), 1,
      sym_identifier,
    STATE(20), 1,
      sym_line_comment,
    STATE(59), 1,
      sym__expression,
    ACTIONS(105), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(19), 5,
      sym_object_literal,
      sym_array_literal,
      sym_function_call,
      sym_string_literal,
      sym_boolean_literal,
  [585] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(111), 1,
      anon_sym_EQ,
    ACTIONS(113), 1,
      anon_sym_COMMA,
    STATE(21), 1,
      sym_line_comment,
    ACTIONS(109), 13,
      ts_builtin_sym_end,
      anon_sym_card,
      anon_sym_game,
      anon_sym_deck,
      anon_sym_zone,
      anon_sym_action,
      anon_sym_template,
      anon_sym_mechanic,
      anon_sym_win_condition,
      anon_sym_player_state,
      anon_sym_let,
      anon_sym_const,
      anon_sym_var,
  [613] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(93), 1,
      anon_sym_LBRACE,
    ACTIONS(95), 1,
      anon_sym_LBRACK,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      sym_number_literal,
    ACTIONS(107), 1,
      sym_identifier,
    ACTIONS(115), 1,
      anon_sym_RPAREN,
    STATE(22), 1,
      sym_line_comment,
    STATE(58), 1,
      sym__expression,
    ACTIONS(105), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(19), 5,
      sym_object_literal,
      sym_array_literal,
      sym_function_call,
      sym_string_literal,
      sym_boolean_literal,
  [655] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(93), 1,
      anon_sym_LBRACE,
    ACTIONS(95), 1,
      anon_sym_LBRACK,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      sym_number_literal,
    ACTIONS(107), 1,
      sym_identifier,
    ACTIONS(117), 1,
      anon_sym_RBRACK,
    STATE(23), 1,
      sym_line_comment,
    STATE(67), 1,
      sym__expression,
    ACTIONS(105), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(19), 5,
      sym_object_literal,
      sym_array_literal,
      sym_function_call,
      sym_string_literal,
      sym_boolean_literal,
  [697] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(93), 1,
      anon_sym_LBRACE,
    ACTIONS(95), 1,
      anon_sym_LBRACK,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      sym_number_literal,
    ACTIONS(107), 1,
      sym_identifier,
    ACTIONS(119), 1,
      anon_sym_RBRACK,
    STATE(24), 1,
      sym_line_comment,
    STATE(59), 1,
      sym__expression,
    ACTIONS(105), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(19), 5,
      sym_object_literal,
      sym_array_literal,
      sym_function_call,
      sym_string_literal,
      sym_boolean_literal,
  [739] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(93), 1,
      anon_sym_LBRACE,
    ACTIONS(95), 1,
      anon_sym_LBRACK,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      sym_number_literal,
    ACTIONS(107), 1,
      sym_identifier,
    STATE(25), 1,
      sym_line_comment,
    STATE(59), 1,
      sym__expression,
    ACTIONS(105), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(19), 5,
      sym_object_literal,
      sym_array_literal,
      sym_function_call,
      sym_string_literal,
      sym_boolean_literal,
  [778] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(93), 1,
      anon_sym_LBRACE,
    ACTIONS(95), 1,
      anon_sym_LBRACK,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      sym_number_literal,
    ACTIONS(107), 1,
      sym_identifier,
    STATE(26), 1,
      sym_line_comment,
    STATE(76), 1,
      sym__expression,
    ACTIONS(105), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(19), 5,
      sym_object_literal,
      sym_array_literal,
      sym_function_call,
      sym_string_literal,
      sym_boolean_literal,
  [817] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(93), 1,
      anon_sym_LBRACE,
    ACTIONS(95), 1,
      anon_sym_LBRACK,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      sym_number_literal,
    ACTIONS(107), 1,
      sym_identifier,
    STATE(27), 1,
      sym_line_comment,
    STATE(28), 1,
      sym__expression,
    ACTIONS(105), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(19), 5,
      sym_object_literal,
      sym_array_literal,
      sym_function_call,
      sym_string_literal,
      sym_boolean_literal,
  [856] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(123), 1,
      anon_sym_COMMA,
    STATE(28), 1,
      sym_line_comment,
    ACTIONS(121), 13,
      ts_builtin_sym_end,
      anon_sym_card,
      anon_sym_game,
      anon_sym_deck,
      anon_sym_zone,
      anon_sym_action,
      anon_sym_template,
      anon_sym_mechanic,
      anon_sym_win_condition,
      anon_sym_player_state,
      anon_sym_let,
      anon_sym_const,
      anon_sym_var,
  [881] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(29), 1,
      sym_line_comment,
    ACTIONS(125), 13,
      ts_builtin_sym_end,
      anon_sym_card,
      anon_sym_game,
      anon_sym_deck,
      anon_sym_zone,
      anon_sym_action,
      anon_sym_template,
      anon_sym_mechanic,
      anon_sym_win_condition,
      anon_sym_player_state,
      anon_sym_let,
      anon_sym_const,
      anon_sym_var,
  [903] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(30), 1,
      sym_line_comment,
    ACTIONS(127), 13,
      ts_builtin_sym_end,
      anon_sym_card,
      anon_sym_game,
      anon_sym_deck,
      anon_sym_zone,
      anon_sym_action,
      anon_sym_template,
      anon_sym_mechanic,
      anon_sym_win_condition,
      anon_sym_player_state,
      anon_sym_let,
      anon_sym_const,
      anon_sym_var,
  [925] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(31), 1,
      sym_line_comment,
    ACTIONS(129), 13,
      ts_builtin_sym_end,
      anon_sym_card,
      anon_sym_game,
      anon_sym_deck,
      anon_sym_zone,
      anon_sym_action,
      anon_sym_template,
      anon_sym_mechanic,
      anon_sym_win_condition,
      anon_sym_player_state,
      anon_sym_let,
      anon_sym_const,
      anon_sym_var,
  [947] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(32), 1,
      sym_line_comment,
    ACTIONS(131), 13,
      ts_builtin_sym_end,
      anon_sym_card,
      anon_sym_game,
      anon_sym_deck,
      anon_sym_zone,
      anon_sym_action,
      anon_sym_template,
      anon_sym_mechanic,
      anon_sym_win_condition,
      anon_sym_player_state,
      anon_sym_let,
      anon_sym_const,
      anon_sym_var,
  [969] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(33), 1,
      sym_line_comment,
    ACTIONS(133), 13,
      ts_builtin_sym_end,
      anon_sym_card,
      anon_sym_game,
      anon_sym_deck,
      anon_sym_zone,
      anon_sym_action,
      anon_sym_template,
      anon_sym_mechanic,
      anon_sym_win_condition,
      anon_sym_player_state,
      anon_sym_let,
      anon_sym_const,
      anon_sym_var,
  [991] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(34), 1,
      sym_line_comment,
    ACTIONS(135), 13,
      ts_builtin_sym_end,
      anon_sym_card,
      anon_sym_game,
      anon_sym_deck,
      anon_sym_zone,
      anon_sym_action,
      anon_sym_template,
      anon_sym_mechanic,
      anon_sym_win_condition,
      anon_sym_player_state,
      anon_sym_let,
      anon_sym_const,
      anon_sym_var,
  [1013] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(35), 1,
      sym_line_comment,
    ACTIONS(137), 13,
      ts_builtin_sym_end,
      anon_sym_card,
      anon_sym_game,
      anon_sym_deck,
      anon_sym_zone,
      anon_sym_action,
      anon_sym_template,
      anon_sym_mechanic,
      anon_sym_win_condition,
      anon_sym_player_state,
      anon_sym_let,
      anon_sym_const,
      anon_sym_var,
  [1035] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(36), 1,
      sym_line_comment,
    ACTIONS(139), 13,
      ts_builtin_sym_end,
      anon_sym_card,
      anon_sym_game,
      anon_sym_deck,
      anon_sym_zone,
      anon_sym_action,
      anon_sym_template,
      anon_sym_mechanic,
      anon_sym_win_condition,
      anon_sym_player_state,
      anon_sym_let,
      anon_sym_const,
      anon_sym_var,
  [1057] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(37), 1,
      sym_line_comment,
    ACTIONS(141), 13,
      ts_builtin_sym_end,
      anon_sym_card,
      anon_sym_game,
      anon_sym_deck,
      anon_sym_zone,
      anon_sym_action,
      anon_sym_template,
      anon_sym_mechanic,
      anon_sym_win_condition,
      anon_sym_player_state,
      anon_sym_let,
      anon_sym_const,
      anon_sym_var,
  [1079] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(38), 1,
      sym_line_comment,
    ACTIONS(143), 13,
      ts_builtin_sym_end,
      anon_sym_card,
      anon_sym_game,
      anon_sym_deck,
      anon_sym_zone,
      anon_sym_action,
      anon_sym_template,
      anon_sym_mechanic,
      anon_sym_win_condition,
      anon_sym_player_state,
      anon_sym_let,
      anon_sym_const,
      anon_sym_var,
  [1101] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(39), 1,
      sym_line_comment,
    ACTIONS(145), 13,
      ts_builtin_sym_end,
      anon_sym_card,
      anon_sym_game,
      anon_sym_deck,
      anon_sym_zone,
      anon_sym_action,
      anon_sym_template,
      anon_sym_mechanic,
      anon_sym_win_condition,
      anon_sym_player_state,
      anon_sym_let,
      anon_sym_const,
      anon_sym_var,
  [1123] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(40), 1,
      sym_line_comment,
    ACTIONS(147), 13,
      ts_builtin_sym_end,
      anon_sym_card,
      anon_sym_game,
      anon_sym_deck,
      anon_sym_zone,
      anon_sym_action,
      anon_sym_template,
      anon_sym_mechanic,
      anon_sym_win_condition,
      anon_sym_player_state,
      anon_sym_let,
      anon_sym_const,
      anon_sym_var,
  [1145] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(41), 1,
      sym_line_comment,
    ACTIONS(149), 13,
      ts_builtin_sym_end,
      anon_sym_card,
      anon_sym_game,
      anon_sym_deck,
      anon_sym_zone,
      anon_sym_action,
      anon_sym_template,
      anon_sym_mechanic,
      anon_sym_win_condition,
      anon_sym_player_state,
      anon_sym_let,
      anon_sym_const,
      anon_sym_var,
  [1167] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(42), 1,
      sym_line_comment,
    ACTIONS(151), 13,
      ts_builtin_sym_end,
      anon_sym_card,
      anon_sym_game,
      anon_sym_deck,
      anon_sym_zone,
      anon_sym_action,
      anon_sym_template,
      anon_sym_mechanic,
      anon_sym_win_condition,
      anon_sym_player_state,
      anon_sym_let,
      anon_sym_const,
      anon_sym_var,
  [1189] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      anon_sym_RBRACE,
    ACTIONS(155), 1,
      sym_identifier,
    STATE(43), 1,
      sym_line_comment,
    STATE(61), 1,
      sym_property,
    STATE(84), 1,
      sym_string_literal,
  [1214] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      sym_identifier,
    ACTIONS(157), 1,
      anon_sym_RBRACE,
    STATE(44), 1,
      sym_line_comment,
    STATE(74), 1,
      sym_property,
    STATE(84), 1,
      sym_string_literal,
  [1239] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      sym_identifier,
    ACTIONS(159), 1,
      anon_sym_RBRACE,
    STATE(45), 1,
      sym_line_comment,
    STATE(74), 1,
      sym_property,
    STATE(84), 1,
      sym_string_literal,
  [1264] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      sym_identifier,
    STATE(46), 1,
      sym_line_comment,
    STATE(74), 1,
      sym_property,
    STATE(84), 1,
      sym_string_literal,
  [1286] = 5,
    ACTIONS(161), 1,
      anon_sym_DQUOTE,
    ACTIONS(165), 1,
      anon_sym_SLASH_SLASH,
    STATE(47), 1,
      sym_line_comment,
    STATE(48), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(163), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
  [1303] = 5,
    ACTIONS(165), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(167), 1,
      anon_sym_DQUOTE,
    STATE(48), 1,
      sym_line_comment,
    STATE(51), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(163), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
  [1320] = 5,
    ACTIONS(161), 1,
      anon_sym_SQUOTE,
    ACTIONS(165), 1,
      anon_sym_SLASH_SLASH,
    STATE(49), 1,
      sym_line_comment,
    STATE(53), 1,
      aux_sym_string_literal_repeat2,
    ACTIONS(169), 2,
      aux_sym_string_literal_token2,
      aux_sym_string_literal_token3,
  [1337] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(171), 1,
      anon_sym_COMMA,
    ACTIONS(174), 2,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
    STATE(50), 2,
      sym_line_comment,
      aux_sym_array_literal_repeat1,
  [1352] = 4,
    ACTIONS(165), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(176), 1,
      anon_sym_DQUOTE,
    ACTIONS(178), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    STATE(51), 2,
      sym_line_comment,
      aux_sym_string_literal_repeat1,
  [1367] = 4,
    ACTIONS(165), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(184), 1,
      anon_sym_SQUOTE,
    ACTIONS(181), 2,
      aux_sym_string_literal_token2,
      aux_sym_string_literal_token3,
    STATE(52), 2,
      sym_line_comment,
      aux_sym_string_literal_repeat2,
  [1382] = 5,
    ACTIONS(165), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(167), 1,
      anon_sym_SQUOTE,
    STATE(52), 1,
      aux_sym_string_literal_repeat2,
    STATE(53), 1,
      sym_line_comment,
    ACTIONS(169), 2,
      aux_sym_string_literal_token2,
      aux_sym_string_literal_token3,
  [1399] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(93), 1,
      anon_sym_LBRACE,
    ACTIONS(186), 1,
      anon_sym_extends,
    STATE(34), 1,
      sym_object_literal,
    STATE(54), 1,
      sym_line_comment,
  [1415] = 3,
    ACTIONS(165), 1,
      anon_sym_SLASH_SLASH,
    STATE(55), 1,
      sym_line_comment,
    ACTIONS(188), 3,
      aux_sym_string_literal_token2,
      anon_sym_SQUOTE,
      aux_sym_string_literal_token3,
  [1427] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(159), 1,
      anon_sym_RBRACE,
    ACTIONS(190), 1,
      anon_sym_COMMA,
    STATE(56), 1,
      sym_line_comment,
    STATE(65), 1,
      aux_sym_object_literal_repeat1,
  [1443] = 3,
    ACTIONS(165), 1,
      anon_sym_SLASH_SLASH,
    STATE(57), 1,
      sym_line_comment,
    ACTIONS(192), 3,
      anon_sym_DQUOTE,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
  [1455] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(194), 1,
      anon_sym_COMMA,
    ACTIONS(196), 1,
      anon_sym_RPAREN,
    STATE(58), 1,
      sym_line_comment,
    STATE(63), 1,
      aux_sym_array_literal_repeat1,
  [1471] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(59), 1,
      sym_line_comment,
    ACTIONS(174), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1483] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(97), 1,
      anon_sym_RBRACK,
    ACTIONS(198), 1,
      anon_sym_COMMA,
    STATE(50), 1,
      aux_sym_array_literal_repeat1,
    STATE(60), 1,
      sym_line_comment,
  [1499] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(200), 1,
      anon_sym_COMMA,
    ACTIONS(202), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      aux_sym_object_literal_repeat1,
    STATE(61), 1,
      sym_line_comment,
  [1515] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    STATE(62), 1,
      sym_line_comment,
    STATE(82), 1,
      sym_string_literal,
  [1531] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(194), 1,
      anon_sym_COMMA,
    ACTIONS(204), 1,
      anon_sym_RPAREN,
    STATE(50), 1,
      aux_sym_array_literal_repeat1,
    STATE(63), 1,
      sym_line_comment,
  [1547] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    STATE(64), 1,
      sym_line_comment,
    STATE(77), 1,
      sym_string_literal,
  [1563] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(206), 1,
      anon_sym_COMMA,
    ACTIONS(209), 1,
      anon_sym_RBRACE,
    STATE(65), 2,
      sym_line_comment,
      aux_sym_object_literal_repeat1,
  [1577] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    STATE(66), 1,
      sym_line_comment,
    STATE(78), 1,
      sym_string_literal,
  [1593] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(211), 1,
      anon_sym_COMMA,
    ACTIONS(213), 1,
      anon_sym_RBRACK,
    STATE(60), 1,
      aux_sym_array_literal_repeat1,
    STATE(67), 1,
      sym_line_comment,
  [1609] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    STATE(68), 1,
      sym_line_comment,
    STATE(79), 1,
      sym_string_literal,
  [1625] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    STATE(69), 1,
      sym_line_comment,
    STATE(80), 1,
      sym_string_literal,
  [1641] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    STATE(70), 1,
      sym_line_comment,
    STATE(81), 1,
      sym_string_literal,
  [1657] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    STATE(71), 1,
      sym_line_comment,
    STATE(73), 1,
      sym_string_literal,
  [1673] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    STATE(54), 1,
      sym_string_literal,
    STATE(72), 1,
      sym_line_comment,
  [1689] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(93), 1,
      anon_sym_LBRACE,
    STATE(35), 1,
      sym_object_literal,
    STATE(73), 1,
      sym_line_comment,
  [1702] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(74), 1,
      sym_line_comment,
    ACTIONS(209), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1713] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(93), 1,
      anon_sym_LBRACE,
    STATE(29), 1,
      sym_object_literal,
    STATE(75), 1,
      sym_line_comment,
  [1726] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(76), 1,
      sym_line_comment,
    ACTIONS(215), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1737] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(93), 1,
      anon_sym_LBRACE,
    STATE(40), 1,
      sym_object_literal,
    STATE(77), 1,
      sym_line_comment,
  [1750] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(93), 1,
      anon_sym_LBRACE,
    STATE(39), 1,
      sym_object_literal,
    STATE(78), 1,
      sym_line_comment,
  [1763] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(93), 1,
      anon_sym_LBRACE,
    STATE(38), 1,
      sym_object_literal,
    STATE(79), 1,
      sym_line_comment,
  [1776] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(93), 1,
      anon_sym_LBRACE,
    STATE(37), 1,
      sym_object_literal,
    STATE(80), 1,
      sym_line_comment,
  [1789] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(93), 1,
      anon_sym_LBRACE,
    STATE(36), 1,
      sym_object_literal,
    STATE(81), 1,
      sym_line_comment,
  [1802] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(93), 1,
      anon_sym_LBRACE,
    STATE(33), 1,
      sym_object_literal,
    STATE(82), 1,
      sym_line_comment,
  [1815] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(93), 1,
      anon_sym_LBRACE,
    STATE(30), 1,
      sym_object_literal,
    STATE(83), 1,
      sym_line_comment,
  [1828] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(217), 1,
      anon_sym_COLON,
    STATE(84), 1,
      sym_line_comment,
  [1838] = 3,
    ACTIONS(165), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(219), 1,
      aux_sym_line_comment_token1,
    STATE(85), 1,
      sym_line_comment,
  [1848] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(221), 1,
      sym_identifier,
    STATE(86), 1,
      sym_line_comment,
  [1858] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(223), 1,
      ts_builtin_sym_end,
    STATE(87), 1,
      sym_line_comment,
  [1868] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(225), 1,
      sym_identifier,
    STATE(88), 1,
      sym_line_comment,
  [1878] = 1,
    ACTIONS(227), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 60,
  [SMALL_STATE(4)] = 118,
  [SMALL_STATE(5)] = 147,
  [SMALL_STATE(6)] = 176,
  [SMALL_STATE(7)] = 205,
  [SMALL_STATE(8)] = 231,
  [SMALL_STATE(9)] = 257,
  [SMALL_STATE(10)] = 283,
  [SMALL_STATE(11)] = 309,
  [SMALL_STATE(12)] = 335,
  [SMALL_STATE(13)] = 361,
  [SMALL_STATE(14)] = 387,
  [SMALL_STATE(15)] = 413,
  [SMALL_STATE(16)] = 439,
  [SMALL_STATE(17)] = 465,
  [SMALL_STATE(18)] = 491,
  [SMALL_STATE(19)] = 517,
  [SMALL_STATE(20)] = 543,
  [SMALL_STATE(21)] = 585,
  [SMALL_STATE(22)] = 613,
  [SMALL_STATE(23)] = 655,
  [SMALL_STATE(24)] = 697,
  [SMALL_STATE(25)] = 739,
  [SMALL_STATE(26)] = 778,
  [SMALL_STATE(27)] = 817,
  [SMALL_STATE(28)] = 856,
  [SMALL_STATE(29)] = 881,
  [SMALL_STATE(30)] = 903,
  [SMALL_STATE(31)] = 925,
  [SMALL_STATE(32)] = 947,
  [SMALL_STATE(33)] = 969,
  [SMALL_STATE(34)] = 991,
  [SMALL_STATE(35)] = 1013,
  [SMALL_STATE(36)] = 1035,
  [SMALL_STATE(37)] = 1057,
  [SMALL_STATE(38)] = 1079,
  [SMALL_STATE(39)] = 1101,
  [SMALL_STATE(40)] = 1123,
  [SMALL_STATE(41)] = 1145,
  [SMALL_STATE(42)] = 1167,
  [SMALL_STATE(43)] = 1189,
  [SMALL_STATE(44)] = 1214,
  [SMALL_STATE(45)] = 1239,
  [SMALL_STATE(46)] = 1264,
  [SMALL_STATE(47)] = 1286,
  [SMALL_STATE(48)] = 1303,
  [SMALL_STATE(49)] = 1320,
  [SMALL_STATE(50)] = 1337,
  [SMALL_STATE(51)] = 1352,
  [SMALL_STATE(52)] = 1367,
  [SMALL_STATE(53)] = 1382,
  [SMALL_STATE(54)] = 1399,
  [SMALL_STATE(55)] = 1415,
  [SMALL_STATE(56)] = 1427,
  [SMALL_STATE(57)] = 1443,
  [SMALL_STATE(58)] = 1455,
  [SMALL_STATE(59)] = 1471,
  [SMALL_STATE(60)] = 1483,
  [SMALL_STATE(61)] = 1499,
  [SMALL_STATE(62)] = 1515,
  [SMALL_STATE(63)] = 1531,
  [SMALL_STATE(64)] = 1547,
  [SMALL_STATE(65)] = 1563,
  [SMALL_STATE(66)] = 1577,
  [SMALL_STATE(67)] = 1593,
  [SMALL_STATE(68)] = 1609,
  [SMALL_STATE(69)] = 1625,
  [SMALL_STATE(70)] = 1641,
  [SMALL_STATE(71)] = 1657,
  [SMALL_STATE(72)] = 1673,
  [SMALL_STATE(73)] = 1689,
  [SMALL_STATE(74)] = 1702,
  [SMALL_STATE(75)] = 1713,
  [SMALL_STATE(76)] = 1726,
  [SMALL_STATE(77)] = 1737,
  [SMALL_STATE(78)] = 1750,
  [SMALL_STATE(79)] = 1763,
  [SMALL_STATE(80)] = 1776,
  [SMALL_STATE(81)] = 1789,
  [SMALL_STATE(82)] = 1802,
  [SMALL_STATE(83)] = 1815,
  [SMALL_STATE(84)] = 1828,
  [SMALL_STATE(85)] = 1838,
  [SMALL_STATE(86)] = 1848,
  [SMALL_STATE(87)] = 1858,
  [SMALL_STATE(88)] = 1868,
  [SMALL_STATE(89)] = 1878,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(62),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(72),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(71),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(70),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(69),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(68),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(66),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(64),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(83),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(88),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_literal, 5),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_literal, 4),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_literal, 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_literal, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_literal, 4),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_literal, 3),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 5),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_literal, 5),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_literal, 3),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, .production_id = 5),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 5),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game_definition, 5, .production_id = 3),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_player_state_definition, 2, .production_id = 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_card_definition, 3, .production_id = 2),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game_definition, 3, .production_id = 2),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deck_definition, 3, .production_id = 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_zone_definition, 3, .production_id = 2),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action_definition, 3, .production_id = 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_definition, 3, .production_id = 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mechanic_definition, 3, .production_id = 2),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_win_condition_definition, 3, .production_id = 2),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_literal_repeat1, 2), SHIFT_REPEAT(25),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_literal_repeat1, 2),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(57),
  [181] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat2, 2), SHIFT_REPEAT(55),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat2, 2),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat2, 1),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_literal_repeat1, 2), SHIFT_REPEAT(46),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_literal_repeat1, 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 3, .production_id = 4),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [223] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 2),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_magical(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
