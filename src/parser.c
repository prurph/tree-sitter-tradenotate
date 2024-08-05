#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 27
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 26
#define ALIAS_COUNT 0
#define TOKEN_COUNT 16
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 10
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 6

enum ts_symbol_identifiers {
  sym_comment = 1,
  anon_sym_AT = 2,
  sym_buy = 3,
  sym_sell = 4,
  sym_quantity = 5,
  sym_underlying = 6,
  sym_expiration = 7,
  sym_strike = 8,
  aux_sym_right_token1 = 9,
  aux_sym_right_token2 = 10,
  sym_price = 11,
  sym_debit = 12,
  sym_credit = 13,
  aux_sym_open_close_token1 = 14,
  aux_sym_open_close_token2 = 15,
  sym_source_file = 16,
  sym_contracts = 17,
  sym_price_line = 18,
  sym_option_contract = 19,
  sym_side = 20,
  sym_right = 21,
  sym_debit_credit = 22,
  sym_open_close = 23,
  aux_sym_source_file_repeat1 = 24,
  aux_sym_contracts_repeat1 = 25,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_AT] = "@",
  [sym_buy] = "buy",
  [sym_sell] = "sell",
  [sym_quantity] = "quantity",
  [sym_underlying] = "underlying",
  [sym_expiration] = "expiration",
  [sym_strike] = "strike",
  [aux_sym_right_token1] = "right_token1",
  [aux_sym_right_token2] = "right_token2",
  [sym_price] = "price",
  [sym_debit] = "debit",
  [sym_credit] = "credit",
  [aux_sym_open_close_token1] = "open_close_token1",
  [aux_sym_open_close_token2] = "open_close_token2",
  [sym_source_file] = "source_file",
  [sym_contracts] = "contracts",
  [sym_price_line] = "price_line",
  [sym_option_contract] = "option_contract",
  [sym_side] = "side",
  [sym_right] = "right",
  [sym_debit_credit] = "debit_credit",
  [sym_open_close] = "open_close",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_contracts_repeat1] = "contracts_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [anon_sym_AT] = anon_sym_AT,
  [sym_buy] = sym_buy,
  [sym_sell] = sym_sell,
  [sym_quantity] = sym_quantity,
  [sym_underlying] = sym_underlying,
  [sym_expiration] = sym_expiration,
  [sym_strike] = sym_strike,
  [aux_sym_right_token1] = aux_sym_right_token1,
  [aux_sym_right_token2] = aux_sym_right_token2,
  [sym_price] = sym_price,
  [sym_debit] = sym_debit,
  [sym_credit] = sym_credit,
  [aux_sym_open_close_token1] = aux_sym_open_close_token1,
  [aux_sym_open_close_token2] = aux_sym_open_close_token2,
  [sym_source_file] = sym_source_file,
  [sym_contracts] = sym_contracts,
  [sym_price_line] = sym_price_line,
  [sym_option_contract] = sym_option_contract,
  [sym_side] = sym_side,
  [sym_right] = sym_right,
  [sym_debit_credit] = sym_debit_credit,
  [sym_open_close] = sym_open_close,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_contracts_repeat1] = aux_sym_contracts_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [sym_buy] = {
    .visible = true,
    .named = true,
  },
  [sym_sell] = {
    .visible = true,
    .named = true,
  },
  [sym_quantity] = {
    .visible = true,
    .named = true,
  },
  [sym_underlying] = {
    .visible = true,
    .named = true,
  },
  [sym_expiration] = {
    .visible = true,
    .named = true,
  },
  [sym_strike] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_right_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_right_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_price] = {
    .visible = true,
    .named = true,
  },
  [sym_debit] = {
    .visible = true,
    .named = true,
  },
  [sym_credit] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_open_close_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_open_close_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_contracts] = {
    .visible = true,
    .named = true,
  },
  [sym_price_line] = {
    .visible = true,
    .named = true,
  },
  [sym_option_contract] = {
    .visible = true,
    .named = true,
  },
  [sym_side] = {
    .visible = true,
    .named = true,
  },
  [sym_right] = {
    .visible = true,
    .named = true,
  },
  [sym_debit_credit] = {
    .visible = true,
    .named = true,
  },
  [sym_open_close] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_contracts_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_debit_credit = 1,
  field_expiration = 2,
  field_open_close = 3,
  field_price = 4,
  field_quantity = 5,
  field_ratio = 6,
  field_right = 7,
  field_side = 8,
  field_strike = 9,
  field_underlying = 10,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_debit_credit] = "debit_credit",
  [field_expiration] = "expiration",
  [field_open_close] = "open_close",
  [field_price] = "price",
  [field_quantity] = "quantity",
  [field_ratio] = "ratio",
  [field_right] = "right",
  [field_side] = "side",
  [field_strike] = "strike",
  [field_underlying] = "underlying",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 3},
  [2] = {.index = 3, .length = 5},
  [3] = {.index = 8, .length = 6},
  [4] = {.index = 14, .length = 6},
  [5] = {.index = 20, .length = 7},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_debit_credit, 3},
    {field_price, 2},
    {field_quantity, 0},
  [3] =
    {field_expiration, 2},
    {field_right, 4},
    {field_side, 0},
    {field_strike, 3},
    {field_underlying, 1},
  [8] =
    {field_expiration, 3},
    {field_ratio, 1},
    {field_right, 5},
    {field_side, 0},
    {field_strike, 4},
    {field_underlying, 2},
  [14] =
    {field_expiration, 2},
    {field_open_close, 5},
    {field_right, 4},
    {field_side, 0},
    {field_strike, 3},
    {field_underlying, 1},
  [20] =
    {field_expiration, 3},
    {field_open_close, 6},
    {field_ratio, 1},
    {field_right, 5},
    {field_side, 0},
    {field_strike, 4},
    {field_underlying, 2},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(45);
      ADVANCE_MAP(
        '#', 46,
        '-', 34,
        '@', 47,
        'B', 29,
        'C', 69,
        'D', 8,
        'P', 66,
        'S', 12,
        'T', 21,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 1:
      if (lookahead == '-') ADVANCE(34);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      END_STATE();
    case 2:
      if (lookahead == '-') ADVANCE(39);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(40);
      END_STATE();
    case 4:
      if (lookahead == 'B') ADVANCE(13);
      END_STATE();
    case 5:
      if (lookahead == 'C') ADVANCE(24);
      if (lookahead == 'D') ADVANCE(8);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 6:
      if (lookahead == 'C') ADVANCE(17);
      if (lookahead == 'O') ADVANCE(23);
      END_STATE();
    case 7:
      if (lookahead == 'D') ADVANCE(14);
      END_STATE();
    case 8:
      if (lookahead == 'E') ADVANCE(4);
      END_STATE();
    case 9:
      if (lookahead == 'E') ADVANCE(7);
      END_STATE();
    case 10:
      if (lookahead == 'E') ADVANCE(20);
      END_STATE();
    case 11:
      if (lookahead == 'E') ADVANCE(76);
      END_STATE();
    case 12:
      if (lookahead == 'E') ADVANCE(19);
      END_STATE();
    case 13:
      if (lookahead == 'I') ADVANCE(27);
      END_STATE();
    case 14:
      if (lookahead == 'I') ADVANCE(28);
      END_STATE();
    case 15:
      if (lookahead == 'L') ADVANCE(67);
      END_STATE();
    case 16:
      if (lookahead == 'L') ADVANCE(49);
      END_STATE();
    case 17:
      if (lookahead == 'L') ADVANCE(22);
      END_STATE();
    case 18:
      if (lookahead == 'L') ADVANCE(15);
      END_STATE();
    case 19:
      if (lookahead == 'L') ADVANCE(16);
      END_STATE();
    case 20:
      if (lookahead == 'N') ADVANCE(75);
      END_STATE();
    case 21:
      if (lookahead == 'O') ADVANCE(31);
      END_STATE();
    case 22:
      if (lookahead == 'O') ADVANCE(25);
      END_STATE();
    case 23:
      if (lookahead == 'P') ADVANCE(10);
      END_STATE();
    case 24:
      if (lookahead == 'R') ADVANCE(9);
      END_STATE();
    case 25:
      if (lookahead == 'S') ADVANCE(11);
      END_STATE();
    case 26:
      if (lookahead == 'T') ADVANCE(65);
      END_STATE();
    case 27:
      if (lookahead == 'T') ADVANCE(73);
      END_STATE();
    case 28:
      if (lookahead == 'T') ADVANCE(74);
      END_STATE();
    case 29:
      if (lookahead == 'U') ADVANCE(30);
      END_STATE();
    case 30:
      if (lookahead == 'Y') ADVANCE(48);
      END_STATE();
    case 31:
      if (lookahead == ' ' ||
          lookahead == '_') ADVANCE(6);
      END_STATE();
    case 32:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(60);
      END_STATE();
    case 33:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 44:
      if (eof) ADVANCE(45);
      if (lookahead == '#') ADVANCE(46);
      if (lookahead == 'B') ADVANCE(29);
      if (lookahead == 'C') ADVANCE(68);
      if (lookahead == 'P') ADVANCE(66);
      if (lookahead == 'S') ADVANCE(12);
      if (lookahead == 'T') ADVANCE(21);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_buy);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_sell);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_quantity);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '.') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_quantity);
      if (lookahead == '.') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_quantity);
      if (lookahead == '.') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_quantity);
      if (lookahead == '.') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_quantity);
      if (lookahead == '.') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_quantity);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_underlying);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_underlying);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(56);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_underlying);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(57);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_underlying);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_underlying);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(59);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_expiration);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_strike);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_strike);
      if (lookahead == '.') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_strike);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_right_token1);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_right_token1);
      if (lookahead == 'U') ADVANCE(26);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_right_token2);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_right_token2);
      if (lookahead == 'A') ADVANCE(18);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_right_token2);
      if (lookahead == 'A') ADVANCE(18);
      if (lookahead == 'R') ADVANCE(9);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_price);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_price);
      if (lookahead == '.') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_price);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_debit);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_credit);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_open_close_token1);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_open_close_token2);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 44},
  [2] = {.lex_state = 44},
  [3] = {.lex_state = 44},
  [4] = {.lex_state = 44},
  [5] = {.lex_state = 44},
  [6] = {.lex_state = 44},
  [7] = {.lex_state = 44},
  [8] = {.lex_state = 44},
  [9] = {.lex_state = 44},
  [10] = {.lex_state = 44},
  [11] = {.lex_state = 44},
  [12] = {.lex_state = 44},
  [13] = {.lex_state = 44},
  [14] = {.lex_state = 44},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 44},
  [17] = {.lex_state = 32},
  [18] = {.lex_state = 32},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 33},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 33},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 32},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [sym_buy] = ACTIONS(1),
    [sym_sell] = ACTIONS(1),
    [sym_quantity] = ACTIONS(1),
    [sym_expiration] = ACTIONS(1),
    [sym_strike] = ACTIONS(1),
    [aux_sym_right_token1] = ACTIONS(1),
    [aux_sym_right_token2] = ACTIONS(1),
    [sym_price] = ACTIONS(1),
    [sym_debit] = ACTIONS(1),
    [sym_credit] = ACTIONS(1),
    [aux_sym_open_close_token1] = ACTIONS(1),
    [aux_sym_open_close_token2] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(25),
    [sym_contracts] = STATE(2),
    [sym_price_line] = STATE(2),
    [sym_option_contract] = STATE(5),
    [sym_side] = STATE(17),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_contracts_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym_buy] = ACTIONS(7),
    [sym_sell] = ACTIONS(7),
    [sym_quantity] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(9), 1,
      sym_quantity,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 1,
      sym_comment,
    STATE(17), 1,
      sym_side,
    ACTIONS(7), 2,
      sym_buy,
      sym_sell,
    STATE(5), 2,
      sym_option_contract,
      aux_sym_contracts_repeat1,
    STATE(3), 3,
      sym_contracts,
      sym_price_line,
      aux_sym_source_file_repeat1,
  [26] = 7,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(23), 1,
      sym_quantity,
    STATE(17), 1,
      sym_side,
    ACTIONS(20), 2,
      sym_buy,
      sym_sell,
    STATE(5), 2,
      sym_option_contract,
      aux_sym_contracts_repeat1,
    STATE(3), 3,
      sym_contracts,
      sym_price_line,
      aux_sym_source_file_repeat1,
  [52] = 4,
    STATE(17), 1,
      sym_side,
    ACTIONS(28), 2,
      sym_buy,
      sym_sell,
    STATE(4), 2,
      sym_option_contract,
      aux_sym_contracts_repeat1,
    ACTIONS(26), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_quantity,
  [69] = 4,
    STATE(17), 1,
      sym_side,
    ACTIONS(7), 2,
      sym_buy,
      sym_sell,
    STATE(4), 2,
      sym_option_contract,
      aux_sym_contracts_repeat1,
    ACTIONS(31), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_quantity,
  [86] = 3,
    STATE(9), 1,
      sym_open_close,
    ACTIONS(35), 2,
      aux_sym_open_close_token1,
      aux_sym_open_close_token2,
    ACTIONS(33), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_buy,
      sym_sell,
      sym_quantity,
  [101] = 3,
    STATE(10), 1,
      sym_open_close,
    ACTIONS(35), 2,
      aux_sym_open_close_token1,
      aux_sym_open_close_token2,
    ACTIONS(37), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_buy,
      sym_sell,
      sym_quantity,
  [116] = 1,
    ACTIONS(39), 7,
      ts_builtin_sym_end,
      sym_comment,
      sym_buy,
      sym_sell,
      sym_quantity,
      aux_sym_open_close_token1,
      aux_sym_open_close_token2,
  [126] = 1,
    ACTIONS(41), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_buy,
      sym_sell,
      sym_quantity,
  [134] = 1,
    ACTIONS(43), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_buy,
      sym_sell,
      sym_quantity,
  [142] = 1,
    ACTIONS(45), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_buy,
      sym_sell,
      sym_quantity,
  [150] = 1,
    ACTIONS(47), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_buy,
      sym_sell,
      sym_quantity,
  [158] = 1,
    ACTIONS(49), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_buy,
      sym_sell,
      sym_quantity,
  [166] = 2,
    STATE(6), 1,
      sym_right,
    ACTIONS(51), 2,
      aux_sym_right_token1,
      aux_sym_right_token2,
  [174] = 2,
    STATE(13), 1,
      sym_debit_credit,
    ACTIONS(53), 2,
      sym_debit,
      sym_credit,
  [182] = 2,
    STATE(7), 1,
      sym_right,
    ACTIONS(51), 2,
      aux_sym_right_token1,
      aux_sym_right_token2,
  [190] = 2,
    ACTIONS(55), 1,
      sym_quantity,
    ACTIONS(57), 1,
      sym_underlying,
  [197] = 1,
    ACTIONS(59), 2,
      sym_quantity,
      sym_underlying,
  [202] = 1,
    ACTIONS(61), 1,
      sym_expiration,
  [206] = 1,
    ACTIONS(63), 1,
      sym_strike,
  [210] = 1,
    ACTIONS(65), 1,
      sym_price,
  [214] = 1,
    ACTIONS(67), 1,
      sym_strike,
  [218] = 1,
    ACTIONS(69), 1,
      sym_expiration,
  [222] = 1,
    ACTIONS(71), 1,
      anon_sym_AT,
  [226] = 1,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
  [230] = 1,
    ACTIONS(75), 1,
      sym_underlying,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 26,
  [SMALL_STATE(4)] = 52,
  [SMALL_STATE(5)] = 69,
  [SMALL_STATE(6)] = 86,
  [SMALL_STATE(7)] = 101,
  [SMALL_STATE(8)] = 116,
  [SMALL_STATE(9)] = 126,
  [SMALL_STATE(10)] = 134,
  [SMALL_STATE(11)] = 142,
  [SMALL_STATE(12)] = 150,
  [SMALL_STATE(13)] = 158,
  [SMALL_STATE(14)] = 166,
  [SMALL_STATE(15)] = 174,
  [SMALL_STATE(16)] = 182,
  [SMALL_STATE(17)] = 190,
  [SMALL_STATE(18)] = 197,
  [SMALL_STATE(19)] = 202,
  [SMALL_STATE(20)] = 206,
  [SMALL_STATE(21)] = 210,
  [SMALL_STATE(22)] = 214,
  [SMALL_STATE(23)] = 218,
  [SMALL_STATE(24)] = 222,
  [SMALL_STATE(25)] = 226,
  [SMALL_STATE(26)] = 230,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_contracts_repeat1, 2, 0, 0),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_contracts_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contracts, 1, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_contract, 6, 0, 3),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_contract, 5, 0, 2),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_right, 1, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_contract, 7, 0, 5),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_contract, 6, 0, 4),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_close, 1, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_debit_credit, 1, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price_line, 4, 0, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_side, 1, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [73] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_tradenotate(void) {
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
