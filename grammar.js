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
        $.zone_definition,
        $.action_definition,
        $.template_definition,
        $.mechanic_definition,
        $.win_condition_definition,
        $.player_state_definition,
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

    // Zone definition: zone "Zone Name" { properties }
    zone_definition: ($) =>
      seq(
        "zone",
        field("name", $.string_literal),
        field("body", $.object_literal),
      ),

    // Action definition: action "Action Name" { properties }
    action_definition: ($) =>
      seq(
        "action",
        field("name", $.string_literal),
        field("body", $.object_literal),
      ),

    // Template definition: template "Template Name" { properties }
    template_definition: ($) =>
      seq(
        "template",
        field("name", $.string_literal),
        field("body", $.object_literal),
      ),

    // Mechanic definition: mechanic "Mechanic Name" { properties }
    mechanic_definition: ($) =>
      seq(
        "mechanic",
        field("name", $.string_literal),
        field("body", $.object_literal),
      ),

    // Win condition definition: win_condition "Name" { properties }
    win_condition_definition: ($) =>
      seq(
        "win_condition",
        field("name", $.string_literal),
        field("body", $.object_literal),
      ),

    // Player state definition: player_state { properties }
    player_state_definition: ($) =>
      seq("player_state", field("body", $.object_literal)),

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
