module.exports = grammar({
  name: "tradenotate",

  // This is a very poor grammar that just matches some individual terms.
  // I need to go through Crafting Interpreters. 😅
  rules: {
    source_file: ($) => repeat($._term),

    // TODO: should only be one of each with a flexible order
    _term: ($) => choice($.price_line, $.options_leg),

    price_line: ($) => seq($.number, $.at, $.price, choice($.debit, $.credit)),

    at: ($) => "@",

    debit: ($) => "(DEBIT)",
    credit: ($) => "(CREDIT)",

    options_leg: ($) =>
      seq(
        $.side,
        $.number,
        $.underlying,
        $.expiration,
        $.number,
        $.right,
        $.open_or_close,
      ),

    buy: ($) => "BUY",
    sell: ($) => "SELL",
    side: ($) => choice($.buy, $.sell),

    open_or_close: ($) => choice("TO_OPEN", "TO_CLOSE"),

    expiration: ($) => /\d{4}-\d{2}-\d{2}/,

    right: ($) => choice(/C(ALL)?/, /P(UT)?/),

    underlying: ($) => /[A-Z]{1,5}/,

    price: ($) => /-?\d+(?:\.\d{1,2})?/,

    number: ($) => /\d+/,

    identifier: ($) => /[A-Za-z]+/,
  },
});
