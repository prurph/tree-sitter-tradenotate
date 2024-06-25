#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 19
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 22
#define ALIAS_COUNT 0
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_at = 1,
  sym_debit = 2,
  sym_credit = 3,
  sym_buy = 4,
  sym_sell = 5,
  anon_sym_TO_OPEN = 6,
  anon_sym_TO_CLOSE = 7,
  sym_expiration = 8,
  aux_sym_right_token1 = 9,
  aux_sym_right_token2 = 10,
  sym_underlying = 11,
  sym_price = 12,
  sym_number = 13,
  sym_source_file = 14,
  sym__term = 15,
  sym_price_line = 16,
  sym_options_leg = 17,
  sym_side = 18,
  sym_open_or_close = 19,
  sym_right = 20,
  aux_sym_source_file_repeat1 = 21,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_at] = "at",
  [sym_debit] = "debit",
  [sym_credit] = "credit",
  [sym_buy] = "buy",
  [sym_sell] = "sell",
  [anon_sym_TO_OPEN] = "TO_OPEN",
  [anon_sym_TO_CLOSE] = "TO_CLOSE",
  [sym_expiration] = "expiration",
  [aux_sym_right_token1] = "right_token1",
  [aux_sym_right_token2] = "right_token2",
  [sym_underlying] = "underlying",
  [sym_price] = "price",
  [sym_number] = "number",
  [sym_source_file] = "source_file",
  [sym__term] = "_term",
  [sym_price_line] = "price_line",
  [sym_options_leg] = "options_leg",
  [sym_side] = "side",
  [sym_open_or_close] = "open_or_close",
  [sym_right] = "right",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_at] = sym_at,
  [sym_debit] = sym_debit,
  [sym_credit] = sym_credit,
  [sym_buy] = sym_buy,
  [sym_sell] = sym_sell,
  [anon_sym_TO_OPEN] = anon_sym_TO_OPEN,
  [anon_sym_TO_CLOSE] = anon_sym_TO_CLOSE,
  [sym_expiration] = sym_expiration,
  [aux_sym_right_token1] = aux_sym_right_token1,
  [aux_sym_right_token2] = aux_sym_right_token2,
  [sym_underlying] = sym_underlying,
  [sym_price] = sym_price,
  [sym_number] = sym_number,
  [sym_source_file] = sym_source_file,
  [sym__term] = sym__term,
  [sym_price_line] = sym_price_line,
  [sym_options_leg] = sym_options_leg,
  [sym_side] = sym_side,
  [sym_open_or_close] = sym_open_or_close,
  [sym_right] = sym_right,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_at] = {
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
  [sym_buy] = {
    .visible = true,
    .named = true,
  },
  [sym_sell] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_TO_OPEN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TO_CLOSE] = {
    .visible = true,
    .named = false,
  },
  [sym_expiration] = {
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
  [sym_underlying] = {
    .visible = true,
    .named = true,
  },
  [sym_price] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__term] = {
    .visible = false,
    .named = true,
  },
  [sym_price_line] = {
    .visible = true,
    .named = true,
  },
  [sym_options_leg] = {
    .visible = true,
    .named = true,
  },
  [sym_side] = {
    .visible = true,
    .named = true,
  },
  [sym_open_or_close] = {
    .visible = true,
    .named = true,
  },
  [sym_right] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(46);
      ADVANCE_MAP(
        '(', 7,
        '-', 40,
        '@', 47,
        'B', 31,
        'C', 56,
        'P', 58,
        'S', 14,
        'T', 23,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      END_STATE();
    case 1:
      if (lookahead == ')') ADVANCE(48);
      END_STATE();
    case 2:
      if (lookahead == ')') ADVANCE(49);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(40);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(44);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(38);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(39);
      END_STATE();
    case 6:
      if (lookahead == 'B') ADVANCE(15);
      END_STATE();
    case 7:
      if (lookahead == 'C') ADVANCE(26);
      if (lookahead == 'D') ADVANCE(10);
      END_STATE();
    case 8:
      if (lookahead == 'C') ADVANCE(19);
      if (lookahead == 'O') ADVANCE(25);
      END_STATE();
    case 9:
      if (lookahead == 'D') ADVANCE(16);
      END_STATE();
    case 10:
      if (lookahead == 'E') ADVANCE(6);
      END_STATE();
    case 11:
      if (lookahead == 'E') ADVANCE(9);
      END_STATE();
    case 12:
      if (lookahead == 'E') ADVANCE(22);
      END_STATE();
    case 13:
      if (lookahead == 'E') ADVANCE(53);
      END_STATE();
    case 14:
      if (lookahead == 'E') ADVANCE(21);
      END_STATE();
    case 15:
      if (lookahead == 'I') ADVANCE(29);
      END_STATE();
    case 16:
      if (lookahead == 'I') ADVANCE(30);
      END_STATE();
    case 17:
      if (lookahead == 'L') ADVANCE(55);
      END_STATE();
    case 18:
      if (lookahead == 'L') ADVANCE(51);
      END_STATE();
    case 19:
      if (lookahead == 'L') ADVANCE(24);
      END_STATE();
    case 20:
      if (lookahead == 'L') ADVANCE(17);
      END_STATE();
    case 21:
      if (lookahead == 'L') ADVANCE(18);
      END_STATE();
    case 22:
      if (lookahead == 'N') ADVANCE(52);
      END_STATE();
    case 23:
      if (lookahead == 'O') ADVANCE(33);
      END_STATE();
    case 24:
      if (lookahead == 'O') ADVANCE(27);
      END_STATE();
    case 25:
      if (lookahead == 'P') ADVANCE(12);
      END_STATE();
    case 26:
      if (lookahead == 'R') ADVANCE(11);
      END_STATE();
    case 27:
      if (lookahead == 'S') ADVANCE(13);
      END_STATE();
    case 28:
      if (lookahead == 'T') ADVANCE(57);
      END_STATE();
    case 29:
      if (lookahead == 'T') ADVANCE(1);
      END_STATE();
    case 30:
      if (lookahead == 'T') ADVANCE(2);
      END_STATE();
    case 31:
      if (lookahead == 'U') ADVANCE(32);
      END_STATE();
    case 32:
      if (lookahead == 'Y') ADVANCE(50);
      END_STATE();
    case 33:
      if (lookahead == '_') ADVANCE(8);
      END_STATE();
    case 34:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 44:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(61);
      END_STATE();
    case 45:
      if (eof) ADVANCE(46);
      if (lookahead == 'B') ADVANCE(31);
      if (lookahead == 'S') ADVANCE(14);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_at);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_debit);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_credit);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_buy);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_sell);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_TO_OPEN);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_TO_CLOSE);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_expiration);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_right_token1);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_right_token1);
      if (lookahead == 'A') ADVANCE(20);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_right_token2);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_right_token2);
      if (lookahead == 'U') ADVANCE(28);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_underlying);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_underlying);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(59);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_underlying);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(60);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_price);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_price);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == '.') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_price);
      if (lookahead == '.') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_price);
      if (lookahead == '.') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_price);
      if (lookahead == '.') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_price);
      if (lookahead == '.') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_price);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 45},
  [2] = {.lex_state = 45},
  [3] = {.lex_state = 45},
  [4] = {.lex_state = 45},
  [5] = {.lex_state = 45},
  [6] = {.lex_state = 45},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 45},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 45},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 34},
  [18] = {.lex_state = 45},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_at] = ACTIONS(1),
    [sym_debit] = ACTIONS(1),
    [sym_credit] = ACTIONS(1),
    [sym_buy] = ACTIONS(1),
    [sym_sell] = ACTIONS(1),
    [anon_sym_TO_OPEN] = ACTIONS(1),
    [anon_sym_TO_CLOSE] = ACTIONS(1),
    [sym_expiration] = ACTIONS(1),
    [aux_sym_right_token1] = ACTIONS(1),
    [aux_sym_right_token2] = ACTIONS(1),
    [sym_price] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(13),
    [sym__term] = STATE(2),
    [sym_price_line] = STATE(2),
    [sym_options_leg] = STATE(2),
    [sym_side] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_buy] = ACTIONS(5),
    [sym_sell] = ACTIONS(5),
    [sym_number] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(7), 1,
      sym_number,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    STATE(14), 1,
      sym_side,
    ACTIONS(5), 2,
      sym_buy,
      sym_sell,
    STATE(3), 4,
      sym__term,
      sym_price_line,
      sym_options_leg,
      aux_sym_source_file_repeat1,
  [20] = 5,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(16), 1,
      sym_number,
    STATE(14), 1,
      sym_side,
    ACTIONS(13), 2,
      sym_buy,
      sym_sell,
    STATE(3), 4,
      sym__term,
      sym_price_line,
      sym_options_leg,
      aux_sym_source_file_repeat1,
  [40] = 1,
    ACTIONS(19), 4,
      ts_builtin_sym_end,
      sym_buy,
      sym_sell,
      sym_number,
  [47] = 1,
    ACTIONS(21), 4,
      ts_builtin_sym_end,
      sym_buy,
      sym_sell,
      sym_number,
  [54] = 1,
    ACTIONS(23), 4,
      ts_builtin_sym_end,
      sym_buy,
      sym_sell,
      sym_number,
  [61] = 2,
    STATE(8), 1,
      sym_right,
    ACTIONS(25), 2,
      aux_sym_right_token1,
      aux_sym_right_token2,
  [69] = 2,
    STATE(6), 1,
      sym_open_or_close,
    ACTIONS(27), 2,
      anon_sym_TO_OPEN,
      anon_sym_TO_CLOSE,
  [77] = 1,
    ACTIONS(29), 2,
      sym_debit,
      sym_credit,
  [82] = 1,
    ACTIONS(31), 2,
      anon_sym_TO_OPEN,
      anon_sym_TO_CLOSE,
  [87] = 1,
    ACTIONS(33), 1,
      sym_number,
  [91] = 1,
    ACTIONS(35), 1,
      sym_at,
  [95] = 1,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
  [99] = 1,
    ACTIONS(39), 1,
      sym_number,
  [103] = 1,
    ACTIONS(41), 1,
      sym_price,
  [107] = 1,
    ACTIONS(43), 1,
      sym_underlying,
  [111] = 1,
    ACTIONS(45), 1,
      sym_expiration,
  [115] = 1,
    ACTIONS(47), 1,
      sym_number,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 20,
  [SMALL_STATE(4)] = 40,
  [SMALL_STATE(5)] = 47,
  [SMALL_STATE(6)] = 54,
  [SMALL_STATE(7)] = 61,
  [SMALL_STATE(8)] = 69,
  [SMALL_STATE(9)] = 77,
  [SMALL_STATE(10)] = 82,
  [SMALL_STATE(11)] = 87,
  [SMALL_STATE(12)] = 91,
  [SMALL_STATE(13)] = 95,
  [SMALL_STATE(14)] = 99,
  [SMALL_STATE(15)] = 103,
  [SMALL_STATE(16)] = 107,
  [SMALL_STATE(17)] = 111,
  [SMALL_STATE(18)] = 115,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price_line, 4, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_or_close, 1, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options_leg, 7, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_right, 1, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_side, 1, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [37] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
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
