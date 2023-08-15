const PREC = {
    GROUP1: 1,
    GROUP2: 2,
    GROUP3: 3,
    GROUP4: 4,
    GROUP5: 5,
    GROUP6: 6,
    GROUP7: 7,
    GROUP8: 8,
    GROUP9: 9,
    GROUP10: 10,
    GROUP11: 11,
    GROUP12: 12,
    GROUP13: 13,
    GROUP14: 14,
    GROUP15: 15
};

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
            $.binary_expression,
            $.object_constructor,
            $.unary_expression
        ),

        _literal: $ => choice(
            $._number_literal,
            $._string_literal,
            $.logical_literal,
            $.null_literal
        ),

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
            $.double_quoted_string_literal,
            $.single_quoted_string_literal
        ),

        double_quoted_string_literal: $ => token(seq('"', /[^"]*/, '"')),
        
        single_quoted_string_literal: $ => token(seq('\'', /[^']*/, '\'')),

        logical_literal: $ => token(choice('false', 'true')),

        null_literal: $ => 'null',

        array_constructor: $ => seq('[', optional(seq(field('element', $._element), repeat(seq(',', field('element', $._element))))), ']'),

        binary_expression: $ => {
            const table = [
                ['=', PREC.GROUP15],
                ['*=', PREC.GROUP15],
                ['/=', PREC.GROUP15],
                ['%=', PREC.GROUP15],
                ['+=', PREC.GROUP15],
                ['-=', PREC.GROUP15],
                ['<<=', PREC.GROUP15],
                ['>>=', PREC.GROUP15],
                ['&=', PREC.GROUP15],
                ['|=', PREC.GROUP15],
                ['^=', PREC.GROUP15],
                ['||', PREC.GROUP14],
                ['&&', PREC.GROUP13],
                ['|', PREC.GROUP12],
                ['^', PREC.GROUP11],
                ['&', PREC.GROUP10],
                ['==', PREC.GROUP9],
                ['!=', PREC.GROUP9],
                ['<', PREC.GROUP8],
                ['>', PREC.GROUP8],
                ['<=', PREC.GROUP8],
                ['>=', PREC.GROUP8],
                ['<<', PREC.GROUP7],
                ['>>', PREC.GROUP7],
                ['+', PREC.GROUP6],
                ['-', PREC.GROUP6],
                ['*', PREC.GROUP5],
                ['/', PREC.GROUP5],
                ['%', PREC.GROUP5],
            ];
            return choice(...table.map(([operator, precedence]) => {
                return prec.left(precedence, seq(
                    field('operand1', $._expression),
                    field('operator', operator),
                    field('operand2', $._expression)
                ));
            }));
        },

        object_constructor: $ => seq('{', optional(seq(field('element', $._element), repeat(seq(',', field('element', $._element))))), '}'),

        unary_expression: $ => prec.right(PREC.GROUP3, seq(
            field('operator', choice('+', '-', '~', '!')),
            field('operand', $._expression),
        )),

        _element: $ => choice(
            $.keyed_element,
            $.unkeyed_element
        ),

        keyed_element: $ => seq(field('key', $._expression), ':', field('value', $._expression)),

        unkeyed_element: $ => field('value', $._expression)

    }

});
