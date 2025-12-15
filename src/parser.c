#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 73
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 47
#define ALIAS_COUNT 0
#define TOKEN_COUNT 28
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 5

enum {
  anon_sym_card = 1,
  anon_sym_game = 2,
  anon_sym_extends = 3,
  anon_sym_deck = 4,
  anon_sym_let = 5,
  anon_sym_const = 6,
  anon_sym_var = 7,
  anon_sym_EQ = 8,
  anon_sym_COMMA = 9,
  anon_sym_LBRACE = 10,
  anon_sym_RBRACE = 11,
  anon_sym_COLON = 12,
  anon_sym_LBRACK = 13,
  anon_sym_RBRACK = 14,
  anon_sym_LPAREN = 15,
  anon_sym_RPAREN = 16,
  anon_sym_DQUOTE = 17,
  aux_sym_string_literal_token1 = 18,
  aux_sym_string_literal_token2 = 19,
  anon_sym_SQUOTE = 20,
  aux_sym_string_literal_token3 = 21,
  sym_number_literal = 22,
  anon_sym_true = 23,
  anon_sym_false = 24,
  sym_identifier = 25,
  anon_sym_SLASH_SLASH = 26,
  aux_sym_line_comment_token1 = 27,
  sym_source_file = 28,
  sym__statement = 29,
  sym_card_definition = 30,
  sym_game_definition = 31,
  sym_deck_definition = 32,
  sym_variable_declaration = 33,
  sym_object_literal = 34,
  sym_property = 35,
  sym_array_literal = 36,
  sym__expression = 37,
  sym_function_call = 38,
  sym_string_literal = 39,
  sym_boolean_literal = 40,
  sym_line_comment = 41,
  aux_sym_source_file_repeat1 = 42,
  aux_sym_object_literal_repeat1 = 43,
  aux_sym_array_literal_repeat1 = 44,
  aux_sym_string_literal_repeat1 = 45,
  aux_sym_string_literal_repeat2 = 46,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_card] = "card",
  [anon_sym_game] = "game",
  [anon_sym_extends] = "extends",
  [anon_sym_deck] = "deck",
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
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 3},
  [3] = {.index = 5, .length = 2},
  [4] = {.index = 7, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_body, 2},
    {field_name, 1},
  [2] =
    {field_body, 4},
    {field_name, 1},
    {field_template, 3},
  [5] =
    {field_key, 0},
    {field_value, 2},
  [7] =
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(37);
      if (lookahead == '"') ADVANCE(54);
      if (lookahead == '\'') ADVANCE(59);
      if (lookahead == '(') ADVANCE(52);
      if (lookahead == ')') ADVANCE(53);
      if (lookahead == ',') ADVANCE(46);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == '=') ADVANCE(45);
      if (lookahead == '[') ADVANCE(50);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == ']') ADVANCE(51);
      if (lookahead == 'c') ADVANCE(8);
      if (lookahead == 'd') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(34);
      if (lookahead == 'f') ADVANCE(6);
      if (lookahead == 'g') ADVANCE(7);
      if (lookahead == 'l') ADVANCE(18);
      if (lookahead == 't') ADVANCE(24);
      if (lookahead == 'v') ADVANCE(9);
      if (lookahead == '{') ADVANCE(47);
      if (lookahead == '}') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(54);
      if (lookahead == '\'') ADVANCE(59);
      if (lookahead == ')') ADVANCE(53);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '[') ADVANCE(50);
      if (lookahead == ']') ADVANCE(51);
      if (lookahead == 'f') ADVANCE(69);
      if (lookahead == 't') ADVANCE(73);
      if (lookahead == '{') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(54);
      if (lookahead == '\'') ADVANCE(59);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '}') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(54);
      if (lookahead == '/') ADVANCE(56);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(57);
      if (lookahead != 0) ADVANCE(55);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(59);
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(62);
      if (lookahead != 0) ADVANCE(60);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(77);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(20);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(21);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(25);
      if (lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 10:
      if (lookahead == 'c') ADVANCE(19);
      END_STATE();
    case 11:
      if (lookahead == 'd') ADVANCE(38);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(27);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 19:
      if (lookahead == 'k') ADVANCE(41);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 21:
      if (lookahead == 'm') ADVANCE(14);
      END_STATE();
    case 22:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 23:
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 24:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 25:
      if (lookahead == 'r') ADVANCE(11);
      END_STATE();
    case 26:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 27:
      if (lookahead == 's') ADVANCE(40);
      END_STATE();
    case 28:
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 29:
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 30:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 31:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 33:
      if (lookahead == 'u') ADVANCE(15);
      END_STATE();
    case 34:
      if (lookahead == 'x') ADVANCE(32);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 36:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(58);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_card);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_game);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_extends);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_deck);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(77);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(55);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_string_literal_token3);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_string_literal_token3);
      if (lookahead == '/') ADVANCE(77);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_string_literal_token3);
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(60);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(81);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '/') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(81);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(81);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(81);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
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
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 79},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 2},
  [72] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_line_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_card] = ACTIONS(1),
    [anon_sym_game] = ACTIONS(1),
    [anon_sym_extends] = ACTIONS(1),
    [anon_sym_deck] = ACTIONS(1),
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
    [sym_source_file] = STATE(70),
    [sym__statement] = STATE(35),
    [sym_card_definition] = STATE(29),
    [sym_game_definition] = STATE(29),
    [sym_deck_definition] = STATE(29),
    [sym_variable_declaration] = STATE(29),
    [sym_line_comment] = STATE(1),
    [aux_sym_source_file_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_card] = ACTIONS(7),
    [anon_sym_game] = ACTIONS(9),
    [anon_sym_deck] = ACTIONS(11),
    [anon_sym_let] = ACTIONS(13),
    [anon_sym_const] = ACTIONS(13),
    [anon_sym_var] = ACTIONS(13),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_RPAREN,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      sym_number_literal,
    ACTIONS(29), 1,
      sym_identifier,
    STATE(2), 1,
      sym_line_comment,
    STATE(61), 1,
      sym__expression,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(25), 5,
      sym_object_literal,
      sym_array_literal,
      sym_function_call,
      sym_string_literal,
      sym_boolean_literal,
  [42] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      sym_number_literal,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(31), 1,
      anon_sym_RBRACK,
    STATE(3), 1,
      sym_line_comment,
    STATE(50), 1,
      sym__expression,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(25), 5,
      sym_object_literal,
      sym_array_literal,
      sym_function_call,
      sym_string_literal,
      sym_boolean_literal,
  [84] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      sym_number_literal,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_RBRACK,
    STATE(4), 1,
      sym_line_comment,
    STATE(60), 1,
      sym__expression,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(25), 5,
      sym_object_literal,
      sym_array_literal,
      sym_function_call,
      sym_string_literal,
      sym_boolean_literal,
  [126] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      sym_number_literal,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_RBRACK,
    STATE(5), 1,
      sym_line_comment,
    STATE(60), 1,
      sym__expression,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(25), 5,
      sym_object_literal,
      sym_array_literal,
      sym_function_call,
      sym_string_literal,
      sym_boolean_literal,
  [168] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      sym_number_literal,
    ACTIONS(29), 1,
      sym_identifier,
    STATE(6), 1,
      sym_line_comment,
    STATE(60), 1,
      sym__expression,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(25), 5,
      sym_object_literal,
      sym_array_literal,
      sym_function_call,
      sym_string_literal,
      sym_boolean_literal,
  [207] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(7), 1,
      sym_line_comment,
    ACTIONS(37), 14,
      ts_builtin_sym_end,
      anon_sym_card,
      anon_sym_game,
      anon_sym_extends,
      anon_sym_deck,
      anon_sym_let,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [230] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      sym_number_literal,
    ACTIONS(29), 1,
      sym_identifier,
    STATE(8), 1,
      sym_line_comment,
    STATE(28), 1,
      sym__expression,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(25), 5,
      sym_object_literal,
      sym_array_literal,
      sym_function_call,
      sym_string_literal,
      sym_boolean_literal,
  [269] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      sym_number_literal,
    ACTIONS(29), 1,
      sym_identifier,
    STATE(9), 1,
      sym_line_comment,
    STATE(66), 1,
      sym__expression,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(25), 5,
      sym_object_literal,
      sym_array_literal,
      sym_function_call,
      sym_string_literal,
      sym_boolean_literal,
  [308] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(10), 1,
      sym_line_comment,
    ACTIONS(39), 14,
      ts_builtin_sym_end,
      anon_sym_card,
      anon_sym_game,
      anon_sym_extends,
      anon_sym_deck,
      anon_sym_let,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [331] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_card,
    ACTIONS(9), 1,
      anon_sym_game,
    ACTIONS(11), 1,
      anon_sym_deck,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    STATE(11), 1,
      sym_line_comment,
    STATE(12), 1,
      aux_sym_source_file_repeat1,
    STATE(35), 1,
      sym__statement,
    ACTIONS(13), 3,
      anon_sym_let,
      anon_sym_const,
      anon_sym_var,
    STATE(29), 4,
      sym_card_definition,
      sym_game_definition,
      sym_deck_definition,
      sym_variable_declaration,
  [367] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(45), 1,
      anon_sym_card,
    ACTIONS(48), 1,
      anon_sym_game,
    ACTIONS(51), 1,
      anon_sym_deck,
    STATE(35), 1,
      sym__statement,
    STATE(12), 2,
      sym_line_comment,
      aux_sym_source_file_repeat1,
    ACTIONS(54), 3,
      anon_sym_let,
      anon_sym_const,
      anon_sym_var,
    STATE(29), 4,
      sym_card_definition,
      sym_game_definition,
      sym_deck_definition,
      sym_variable_declaration,
  [401] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    STATE(13), 1,
      sym_line_comment,
    ACTIONS(57), 11,
      ts_builtin_sym_end,
      anon_sym_card,
      anon_sym_game,
      anon_sym_deck,
      anon_sym_let,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [424] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(14), 1,
      sym_line_comment,
    ACTIONS(61), 11,
      ts_builtin_sym_end,
      anon_sym_card,
      anon_sym_game,
      anon_sym_deck,
      anon_sym_let,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [444] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(15), 1,
      sym_line_comment,
    ACTIONS(63), 11,
      ts_builtin_sym_end,
      anon_sym_card,
      anon_sym_game,
      anon_sym_deck,
      anon_sym_let,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [464] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(16), 1,
      sym_line_comment,
    ACTIONS(65), 11,
      ts_builtin_sym_end,
      anon_sym_card,
      anon_sym_game,
      anon_sym_deck,
      anon_sym_let,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [484] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(17), 1,
      sym_line_comment,
    ACTIONS(67), 11,
      ts_builtin_sym_end,
      anon_sym_card,
      anon_sym_game,
      anon_sym_deck,
      anon_sym_let,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [504] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(18), 1,
      sym_line_comment,
    ACTIONS(69), 11,
      ts_builtin_sym_end,
      anon_sym_card,
      anon_sym_game,
      anon_sym_deck,
      anon_sym_let,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [524] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(19), 1,
      sym_line_comment,
    ACTIONS(71), 11,
      ts_builtin_sym_end,
      anon_sym_card,
      anon_sym_game,
      anon_sym_deck,
      anon_sym_let,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [544] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(20), 1,
      sym_line_comment,
    ACTIONS(73), 11,
      ts_builtin_sym_end,
      anon_sym_card,
      anon_sym_game,
      anon_sym_deck,
      anon_sym_let,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [564] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(21), 1,
      sym_line_comment,
    ACTIONS(75), 11,
      ts_builtin_sym_end,
      anon_sym_card,
      anon_sym_game,
      anon_sym_deck,
      anon_sym_let,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [584] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(22), 1,
      sym_line_comment,
    ACTIONS(77), 11,
      ts_builtin_sym_end,
      anon_sym_card,
      anon_sym_game,
      anon_sym_deck,
      anon_sym_let,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [604] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(23), 1,
      sym_line_comment,
    ACTIONS(79), 11,
      ts_builtin_sym_end,
      anon_sym_card,
      anon_sym_game,
      anon_sym_deck,
      anon_sym_let,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [624] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(24), 1,
      sym_line_comment,
    ACTIONS(81), 11,
      ts_builtin_sym_end,
      anon_sym_card,
      anon_sym_game,
      anon_sym_deck,
      anon_sym_let,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [644] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(25), 1,
      sym_line_comment,
    ACTIONS(57), 11,
      ts_builtin_sym_end,
      anon_sym_card,
      anon_sym_game,
      anon_sym_deck,
      anon_sym_let,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [664] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(26), 1,
      sym_line_comment,
    ACTIONS(83), 11,
      ts_builtin_sym_end,
      anon_sym_card,
      anon_sym_game,
      anon_sym_deck,
      anon_sym_let,
      anon_sym_const,
      anon_sym_var,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [684] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(87), 1,
      anon_sym_EQ,
    ACTIONS(89), 1,
      anon_sym_COMMA,
    STATE(27), 1,
      sym_line_comment,
    ACTIONS(85), 7,
      ts_builtin_sym_end,
      anon_sym_card,
      anon_sym_game,
      anon_sym_deck,
      anon_sym_let,
      anon_sym_const,
      anon_sym_var,
  [706] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(93), 1,
      anon_sym_COMMA,
    STATE(28), 1,
      sym_line_comment,
    ACTIONS(91), 7,
      ts_builtin_sym_end,
      anon_sym_card,
      anon_sym_game,
      anon_sym_deck,
      anon_sym_let,
      anon_sym_const,
      anon_sym_var,
  [725] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(29), 1,
      sym_line_comment,
    ACTIONS(95), 7,
      ts_builtin_sym_end,
      anon_sym_card,
      anon_sym_game,
      anon_sym_deck,
      anon_sym_let,
      anon_sym_const,
      anon_sym_var,
  [741] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(30), 1,
      sym_line_comment,
    ACTIONS(97), 7,
      ts_builtin_sym_end,
      anon_sym_card,
      anon_sym_game,
      anon_sym_deck,
      anon_sym_let,
      anon_sym_const,
      anon_sym_var,
  [757] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(31), 1,
      sym_line_comment,
    ACTIONS(99), 7,
      ts_builtin_sym_end,
      anon_sym_card,
      anon_sym_game,
      anon_sym_deck,
      anon_sym_let,
      anon_sym_const,
      anon_sym_var,
  [773] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(32), 1,
      sym_line_comment,
    ACTIONS(101), 7,
      ts_builtin_sym_end,
      anon_sym_card,
      anon_sym_game,
      anon_sym_deck,
      anon_sym_let,
      anon_sym_const,
      anon_sym_var,
  [789] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(33), 1,
      sym_line_comment,
    ACTIONS(103), 7,
      ts_builtin_sym_end,
      anon_sym_card,
      anon_sym_game,
      anon_sym_deck,
      anon_sym_let,
      anon_sym_const,
      anon_sym_var,
  [805] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(34), 1,
      sym_line_comment,
    ACTIONS(105), 7,
      ts_builtin_sym_end,
      anon_sym_card,
      anon_sym_game,
      anon_sym_deck,
      anon_sym_let,
      anon_sym_const,
      anon_sym_var,
  [821] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(35), 1,
      sym_line_comment,
    ACTIONS(107), 7,
      ts_builtin_sym_end,
      anon_sym_card,
      anon_sym_game,
      anon_sym_deck,
      anon_sym_let,
      anon_sym_const,
      anon_sym_var,
  [837] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(36), 1,
      sym_line_comment,
    ACTIONS(109), 7,
      ts_builtin_sym_end,
      anon_sym_card,
      anon_sym_game,
      anon_sym_deck,
      anon_sym_let,
      anon_sym_const,
      anon_sym_var,
  [853] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      anon_sym_RBRACE,
    ACTIONS(113), 1,
      sym_identifier,
    STATE(37), 1,
      sym_line_comment,
    STATE(65), 1,
      sym_property,
    STATE(68), 1,
      sym_string_literal,
  [878] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(113), 1,
      sym_identifier,
    ACTIONS(115), 1,
      anon_sym_RBRACE,
    STATE(38), 1,
      sym_line_comment,
    STATE(65), 1,
      sym_property,
    STATE(68), 1,
      sym_string_literal,
  [903] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(113), 1,
      sym_identifier,
    ACTIONS(117), 1,
      anon_sym_RBRACE,
    STATE(39), 1,
      sym_line_comment,
    STATE(49), 1,
      sym_property,
    STATE(68), 1,
      sym_string_literal,
  [928] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(113), 1,
      sym_identifier,
    STATE(40), 1,
      sym_line_comment,
    STATE(65), 1,
      sym_property,
    STATE(68), 1,
      sym_string_literal,
  [950] = 5,
    ACTIONS(121), 1,
      anon_sym_SQUOTE,
    ACTIONS(123), 1,
      anon_sym_SLASH_SLASH,
    STATE(41), 1,
      sym_line_comment,
    STATE(44), 1,
      aux_sym_string_literal_repeat2,
    ACTIONS(119), 2,
      aux_sym_string_literal_token2,
      aux_sym_string_literal_token3,
  [967] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(125), 1,
      anon_sym_COMMA,
    ACTIONS(128), 2,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
    STATE(42), 2,
      sym_line_comment,
      aux_sym_array_literal_repeat1,
  [982] = 5,
    ACTIONS(123), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(130), 1,
      anon_sym_DQUOTE,
    STATE(43), 1,
      sym_line_comment,
    STATE(47), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(132), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
  [999] = 4,
    ACTIONS(123), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(134), 2,
      aux_sym_string_literal_token2,
      aux_sym_string_literal_token3,
    STATE(44), 2,
      sym_line_comment,
      aux_sym_string_literal_repeat2,
  [1014] = 4,
    ACTIONS(123), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(139), 1,
      anon_sym_DQUOTE,
    ACTIONS(141), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
    STATE(45), 2,
      sym_line_comment,
      aux_sym_string_literal_repeat1,
  [1029] = 5,
    ACTIONS(123), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(130), 1,
      anon_sym_SQUOTE,
    STATE(41), 1,
      aux_sym_string_literal_repeat2,
    STATE(46), 1,
      sym_line_comment,
    ACTIONS(119), 2,
      aux_sym_string_literal_token2,
      aux_sym_string_literal_token3,
  [1046] = 5,
    ACTIONS(121), 1,
      anon_sym_DQUOTE,
    ACTIONS(123), 1,
      anon_sym_SLASH_SLASH,
    STATE(45), 1,
      aux_sym_string_literal_repeat1,
    STATE(47), 1,
      sym_line_comment,
    ACTIONS(132), 2,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
  [1063] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(115), 1,
      anon_sym_RBRACE,
    ACTIONS(144), 1,
      anon_sym_COMMA,
    STATE(48), 1,
      sym_line_comment,
    STATE(56), 1,
      aux_sym_object_literal_repeat1,
  [1079] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(146), 1,
      anon_sym_COMMA,
    ACTIONS(148), 1,
      anon_sym_RBRACE,
    STATE(48), 1,
      aux_sym_object_literal_repeat1,
    STATE(49), 1,
      sym_line_comment,
  [1095] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(150), 1,
      anon_sym_COMMA,
    ACTIONS(152), 1,
      anon_sym_RBRACK,
    STATE(50), 1,
      sym_line_comment,
    STATE(59), 1,
      aux_sym_array_literal_repeat1,
  [1111] = 3,
    ACTIONS(123), 1,
      anon_sym_SLASH_SLASH,
    STATE(51), 1,
      sym_line_comment,
    ACTIONS(154), 3,
      aux_sym_string_literal_token2,
      anon_sym_SQUOTE,
      aux_sym_string_literal_token3,
  [1123] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    STATE(52), 1,
      sym_line_comment,
    STATE(63), 1,
      sym_string_literal,
  [1139] = 3,
    ACTIONS(123), 1,
      anon_sym_SLASH_SLASH,
    STATE(53), 1,
      sym_line_comment,
    ACTIONS(156), 3,
      anon_sym_DQUOTE,
      aux_sym_string_literal_token1,
      aux_sym_string_literal_token2,
  [1151] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    STATE(54), 1,
      sym_line_comment,
    STATE(57), 1,
      sym_string_literal,
  [1167] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(158), 1,
      anon_sym_COMMA,
    ACTIONS(160), 1,
      anon_sym_RPAREN,
    STATE(42), 1,
      aux_sym_array_literal_repeat1,
    STATE(55), 1,
      sym_line_comment,
  [1183] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(162), 1,
      anon_sym_COMMA,
    ACTIONS(165), 1,
      anon_sym_RBRACE,
    STATE(56), 2,
      sym_line_comment,
      aux_sym_object_literal_repeat1,
  [1197] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(167), 1,
      anon_sym_extends,
    STATE(32), 1,
      sym_object_literal,
    STATE(57), 1,
      sym_line_comment,
  [1213] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    STATE(58), 1,
      sym_line_comment,
    STATE(64), 1,
      sym_string_literal,
  [1229] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(33), 1,
      anon_sym_RBRACK,
    ACTIONS(169), 1,
      anon_sym_COMMA,
    STATE(42), 1,
      aux_sym_array_literal_repeat1,
    STATE(59), 1,
      sym_line_comment,
  [1245] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(60), 1,
      sym_line_comment,
    ACTIONS(128), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1257] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(158), 1,
      anon_sym_COMMA,
    ACTIONS(171), 1,
      anon_sym_RPAREN,
    STATE(55), 1,
      aux_sym_array_literal_repeat1,
    STATE(61), 1,
      sym_line_comment,
  [1273] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    STATE(31), 1,
      sym_object_literal,
    STATE(62), 1,
      sym_line_comment,
  [1286] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    STATE(34), 1,
      sym_object_literal,
    STATE(63), 1,
      sym_line_comment,
  [1299] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    STATE(33), 1,
      sym_object_literal,
    STATE(64), 1,
      sym_line_comment,
  [1312] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(65), 1,
      sym_line_comment,
    ACTIONS(165), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1323] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(66), 1,
      sym_line_comment,
    ACTIONS(173), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1334] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(175), 1,
      sym_identifier,
    STATE(67), 1,
      sym_line_comment,
  [1344] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(177), 1,
      anon_sym_COLON,
    STATE(68), 1,
      sym_line_comment,
  [1354] = 3,
    ACTIONS(123), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(179), 1,
      aux_sym_line_comment_token1,
    STATE(69), 1,
      sym_line_comment,
  [1364] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(181), 1,
      ts_builtin_sym_end,
    STATE(70), 1,
      sym_line_comment,
  [1374] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(183), 1,
      sym_identifier,
    STATE(71), 1,
      sym_line_comment,
  [1384] = 1,
    ACTIONS(185), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 42,
  [SMALL_STATE(4)] = 84,
  [SMALL_STATE(5)] = 126,
  [SMALL_STATE(6)] = 168,
  [SMALL_STATE(7)] = 207,
  [SMALL_STATE(8)] = 230,
  [SMALL_STATE(9)] = 269,
  [SMALL_STATE(10)] = 308,
  [SMALL_STATE(11)] = 331,
  [SMALL_STATE(12)] = 367,
  [SMALL_STATE(13)] = 401,
  [SMALL_STATE(14)] = 424,
  [SMALL_STATE(15)] = 444,
  [SMALL_STATE(16)] = 464,
  [SMALL_STATE(17)] = 484,
  [SMALL_STATE(18)] = 504,
  [SMALL_STATE(19)] = 524,
  [SMALL_STATE(20)] = 544,
  [SMALL_STATE(21)] = 564,
  [SMALL_STATE(22)] = 584,
  [SMALL_STATE(23)] = 604,
  [SMALL_STATE(24)] = 624,
  [SMALL_STATE(25)] = 644,
  [SMALL_STATE(26)] = 664,
  [SMALL_STATE(27)] = 684,
  [SMALL_STATE(28)] = 706,
  [SMALL_STATE(29)] = 725,
  [SMALL_STATE(30)] = 741,
  [SMALL_STATE(31)] = 757,
  [SMALL_STATE(32)] = 773,
  [SMALL_STATE(33)] = 789,
  [SMALL_STATE(34)] = 805,
  [SMALL_STATE(35)] = 821,
  [SMALL_STATE(36)] = 837,
  [SMALL_STATE(37)] = 853,
  [SMALL_STATE(38)] = 878,
  [SMALL_STATE(39)] = 903,
  [SMALL_STATE(40)] = 928,
  [SMALL_STATE(41)] = 950,
  [SMALL_STATE(42)] = 967,
  [SMALL_STATE(43)] = 982,
  [SMALL_STATE(44)] = 999,
  [SMALL_STATE(45)] = 1014,
  [SMALL_STATE(46)] = 1029,
  [SMALL_STATE(47)] = 1046,
  [SMALL_STATE(48)] = 1063,
  [SMALL_STATE(49)] = 1079,
  [SMALL_STATE(50)] = 1095,
  [SMALL_STATE(51)] = 1111,
  [SMALL_STATE(52)] = 1123,
  [SMALL_STATE(53)] = 1139,
  [SMALL_STATE(54)] = 1151,
  [SMALL_STATE(55)] = 1167,
  [SMALL_STATE(56)] = 1183,
  [SMALL_STATE(57)] = 1197,
  [SMALL_STATE(58)] = 1213,
  [SMALL_STATE(59)] = 1229,
  [SMALL_STATE(60)] = 1245,
  [SMALL_STATE(61)] = 1257,
  [SMALL_STATE(62)] = 1273,
  [SMALL_STATE(63)] = 1286,
  [SMALL_STATE(64)] = 1299,
  [SMALL_STATE(65)] = 1312,
  [SMALL_STATE(66)] = 1323,
  [SMALL_STATE(67)] = 1334,
  [SMALL_STATE(68)] = 1344,
  [SMALL_STATE(69)] = 1354,
  [SMALL_STATE(70)] = 1364,
  [SMALL_STATE(71)] = 1374,
  [SMALL_STATE(72)] = 1384,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(52),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(54),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(58),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(71),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, .production_id = 4),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_literal, 4),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 4),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_literal, 3),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 4),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_literal, 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_literal, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_literal, 3),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_literal, 5),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_literal, 5),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_literal, 4),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 2),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game_definition, 5, .production_id = 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game_definition, 3, .production_id = 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deck_definition, 3, .production_id = 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_card_definition, 3, .production_id = 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_literal_repeat1, 2), SHIFT_REPEAT(6),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_literal_repeat1, 2),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat2, 2), SHIFT_REPEAT(51),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat2, 2),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(53),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat2, 1),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 1),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_literal_repeat1, 2), SHIFT_REPEAT(40),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_literal_repeat1, 2),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 3, .production_id = 3),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [181] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 2),
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
