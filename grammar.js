module.exports = grammar({
  name: "magical",

  extras: ($) => [/\s/, $.line_comment],

  rules: {
    source_file: ($) => repeat($._statement),

    _statement: ($) =>
      choice(
        $.card_definition,
        $.game_definition,
        $.deck_definition,
        $.variable_declaration,
      ),

    // Card definition: card "Card Name" { properties }
    card_definition: ($) =>
      seq(
        "card",
        field("name", $.string_literal),
        field("body", $.object_literal),
      ),

    // Game definition: game "Game Name" { properties }
    game_definition: ($) =>
      seq(
        "game",
        field("name", $.string_literal),
        optional(seq("extends", field("template", $.identifier))),
        field("body", $.object_literal),
      ),

    // Deck definition: deck "Deck Name" { properties }
    deck_definition: ($) =>
      seq(
        "deck",
        field("name", $.string_literal),
        field("body", $.object_literal),
      ),

    // Variable declarations: let x = value
    variable_declaration: ($) =>
      seq(
        choice("let", "const", "var"),
        $.identifier,
        optional(seq("=", $._expression)),
        optional(","),
      ),

    // Object literals: { key: value, ... }
    object_literal: ($) =>
      seq(
        "{",
        optional(seq($.property, repeat(seq(",", $.property)), optional(","))),
        "}",
      ),

    property: ($) =>
      seq(
        field("key", choice($.identifier, $.string_literal)),
        ":",
        field("value", $._expression),
      ),

    // Array literals: [item, ...]
    array_literal: ($) =>
      seq(
        "[",
        optional(
          seq($._expression, repeat(seq(",", $._expression)), optional(",")),
        ),
        "]",
      ),

    // Expressions
    _expression: ($) =>
      choice(
        $.identifier,
        $.string_literal,
        $.number_literal,
        $.boolean_literal,
        $.object_literal,
        $.array_literal,
        $.function_call,
      ),

    // Function calls: func(args)
    function_call: ($) =>
      seq(
        field("function", $.identifier),
        "(",
        optional(seq($._expression, repeat(seq(",", $._expression)))),
        ")",
      ),

    // Literals
    string_literal: ($) =>
      choice(
        seq('"', repeat(choice(/[^"\\]/, /\\./)), '"'),
        seq("'", repeat(choice(/[^'\\]/, /\\./)), "'"),
      ),

    number_literal: ($) => /\d+(\.\d+)?/,

    boolean_literal: ($) => choice("true", "false"),

    identifier: ($) => /[a-zA-Z_][a-zA-Z0-9_]*/,

    // Comments
    line_comment: ($) => seq("//", /.*/),
  },
});
