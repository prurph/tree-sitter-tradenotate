# Tradenotate

I have no idea what I'm doing here. I just wanted to use Textual's built in highlighting support for text areas to get some cool syntax highlighting in the trade editor.

Basically I have a super primitive grammar in grammar.js. Here are commands:

```sh
# Run tests
$ tree-sitter test

# Build parser.so
$ gcc -shared -o src/parser.so -I./src src/parser.c -Os

# or
$ npm run build

# Then copy it and highlights.scm to moneybadger
$ cp {src/parser.so,src/highlights.scm} ../moneybadger/moneybadger/ui/components/
```

I found the gcc incantation on stack overflow. The makefile was generating dylib I guess because I'm on macOS and I wasn't immediately sure how to generate the .so files so I just invoke gcc directly.

The `npm run build` script invokes gcc and then copies tradenotate.so into the components directory where the TextArea looks for it.

## Highlighting

The actual highlighting is defined in [./src/highlights.scm]. To see what fields have what colors in the Textual built-in themes look [here](https://github.com/Textualize/textual/blob/aeeda75b62606c8d83d5d664297245e197755049/src/textual/_text_area_theme.py#L244).

I just manually copied it into the components directory.
