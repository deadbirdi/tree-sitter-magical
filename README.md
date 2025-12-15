# Tree-sitter Magical

A Tree-sitter grammar for the Magical card game configuration language.

## Overview

Magical is a domain-specific language for defining card games, from simple games like Solitaire to complex trading card games like Magic: The Gathering. This Tree-sitter grammar provides syntax highlighting and parsing support for `.mgcl` files.

## Features

- **Card definitions**: `card "Card Name" { ... }`
- **Game definitions**: `game "Game Name" { ... }`
- **Deck definitions**: `deck "Deck Name" { ... }`
- **Template inheritance**: `extends template_name`
- **Comments**: `// line comments`
- **Data types**: strings, numbers, booleans, objects, arrays
- **Function calls**: `function_name(args)`

## Installation

### Prerequisites

- [Node.js](https://nodejs.org/) (for building the grammar)
- [tree-sitter-cli](https://github.com/tree-sitter/tree-sitter/tree/master/cli)

### Building

```bash
# Clone the repository
git clone https://github.com/sneakycrow/tree-sitter-magical.git
cd tree-sitter-magical

# Install dependencies
npm install

# Generate the parser
npm run build

# Run tests
npm test
```

## Usage

### With Zed Editor

This grammar is used by the [Magical language extension for Zed](https://github.com/sneakycrow/zed-magical).

### With Other Editors

You can use this grammar with any editor that supports Tree-sitter:

- **Neovim**: Add to your Tree-sitter configuration
- **Helix**: Add to `languages.toml`
- **Emacs**: Use with `tree-sitter-mode`

## Example Syntax

```mgcl
// Simple card definition
card "Lightning Bolt" {
  cost: 1,
  type: "instant",
  damage: 3
}

// Playing card
card "Ace of Spades" {
  suit: "spades",
  rank: "ace",
  value: 1,
  color: "black"
}

// Game definition with template
game "Simple Magic" extends trading_card_template {
  players: 2,
  starting_life: 20,
  zones: {
    hand: { max_size: 7 },
    battlefield: { visible: true }
  }
}

// Deck definition
deck "Aggro Red" {
  colors: ["red"],
  strategy: "aggressive",
  creatures: 24,
  spells: 12,
  lands: 24
}
```

## Grammar Rules

The grammar supports:

- **Keywords**: `card`, `game`, `deck`, `extends`, `let`, `const`, `var`
- **Literals**: strings (`"text"`), numbers (`42`, `3.14`), booleans (`true`, `false`)
- **Objects**: `{ key: value, ... }`
- **Arrays**: `[item1, item2, ...]`
- **Comments**: `// single line`
- **Function calls**: `func(arg1, arg2)`

## Testing

The repository includes test cases in the `test/corpus/` directory:

```bash
# Run all tests
npm test

# Run specific test
npx tree-sitter test --filter "card_definitions"

# Parse a specific file
npx tree-sitter parse examples/test.mgcl
```

## Contributing

1. Fork the repository
2. Create a feature branch
3. Make your changes to `grammar.js`
4. Run `npm run build` to regenerate the parser
5. Add tests in `test/corpus/`
6. Run `npm test` to verify
7. Submit a pull request

## Language Specification

For the complete language specification, see the [Magical Language Spec](https://github.com/sneakycrow/mgcl/blob/main/SPEC.md).

## Related Projects

- [Magical Language Compiler](https://github.com/sneakycrow/mgcl) - The main Magical language implementation
- [Zed Magical Extension](https://github.com/sneakycrow/zed-magical) - Syntax highlighting for Zed editor

## License

MIT License - see [LICENSE](LICENSE) file for details.