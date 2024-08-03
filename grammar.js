module.exports = grammar({
  name: "tradenotate",

  // This is a very poor grammar that just matches some individual terms.
  // I need to go through Crafting Interpreters. 😅
  rules: {
    source_file: ($) =>
      repeat(prec.right(choice($.comment, $.contracts, $.price_line))),

    comment: ($) => token(seq("#", /.*/)),

    contracts: ($) => prec.right(repeat1($.option_contract)),

    price_line: ($) =>
      seq(
        field("quantity", $.quantity),
        "@",
        field("price", $.price),
        field("debit_credit", $.debit_credit),
      ),

    option_contract: ($) =>
      seq(
        field("side", $.side),
        field("ratio", optional($.quantity)),
        field("underlying", $.underlying),
        field("expiration", $.expiration),
        field("strike", $.strike),
        field("right", $.right),
        field("open_close", optional($.open_close)),
      ),

    buy: ($) => "BUY",

    sell: ($) => "SELL",

    side: ($) => choice($.buy, $.sell),

    quantity: ($) => /\d+/,

    underlying: ($) => /[A-Z]{1,5}/,

    expiration: ($) => /\d{4}-\d{2}-\d{2}/,

    strike: ($) => /\d+(?:\.\d{1,2})?/,

    right: ($) => choice(/P(UT)?/, /C(ALL)?/),

    price: ($) => /-?\d+(?:\.\d{1,2})?/,

    debit: ($) => "DEBIT",

    credit: ($) => "CREDIT",

    debit_credit: ($) => choice($.debit, $.credit),

    open_close: ($) => choice(/TO[_ ]OPEN/, /TO[_ ]CLOSE/),
  },
});
