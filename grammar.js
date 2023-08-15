module.exports = grammar({

    name: 'modelscript',

    conflicts: $ => [
    ],

    rules: {

        module: $ => seq(
            optional(field('expression', $._expression))
        ),

        _expression: $ => choice(
            $._literal,
            $.array_constructor,
            $.object_constructor
        ),

        _literal: $ => choice(
            $.logical_literal,
            $.null_literal,
            $._number_literal,
            $._string_literal
        ),

        logical_literal: $ => token(choice('false', 'true')),

        null_literal: $ => 'null',

        _number_literal: $ => choice(
            $._integer_literal
        ),

        _integer_literal: $ => choice(
            $.binary_integer_literal,
            $.octal_integer_literal,
            $.decimal_integer_literal,
            $.hexadecimal_integer_literal
        ),

        binary_integer_literal: $ => /0b[0-1]+/,

        octal_integer_literal: $ => /0o[0-7]+/,

        decimal_integer_literal: $ => /[1-9][0-9]*/,

        hexadecimal_integer_literal: $ => /0x[0-9A-Fa-f]+/,

        _string_literal: $ => choice(
            $.single_quoted_string_literal,
            $.double_quoted_string_literal
        ),

        single_quoted_string_literal: $ => token(seq('\'', /[^']*/, '\'')),

        double_quoted_string_literal: $ => token(seq('"', /[^"]*/, '"')),

        array_constructor: $ => seq('[', optional(seq(field('element', $._element), repeat(seq(',', field('element', $._element))))), ']'),

        object_constructor: $ => seq('{', optional(seq(field('element', $._element), repeat(seq(',', field('element', $._element))))), '}'),

        _element: $ => choice(
            $.keyed_element,
            $.unkeyed_element
        ),

        keyed_element: $ => seq(field('key', $._expression), ':', field('value', $._expression)),

        unkeyed_element: $ => field('value', $._expression)

    }

});


