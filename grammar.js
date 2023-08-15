const PREC = {
    GROUP15: -1,
    GROUP14: 1,
    GROUP13: 2,
    GROUP12: 3,
    GROUP11: 4,
    GROUP10: 5,
    GROUP9: 6,
    GROUP8: 7,
    GROUP7: 8,
    GROUP6: 9,
    GROUP5: 10,
    GROUP4: 11,
    GROUP3: 12,
    GROUP2: 13,
    GROUP1: 14,
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
            $.conditional_expression,
            $.context_item_expression,
            $.object_constructor,
            $.parenthesized_expression,
            $.subscript_expression,
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

        decimal_integer_literal: $ => token(choice(
            '0',
            /[1-9][0-9]*/
        )),

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

        conditional_expression: $ => choice(
            prec.right(PREC.GROUP15, seq(field('condition', $._expression), '?', field('consequence', $._expression), ':', field('alternative', $._expression))),
            prec.right(PREC.GROUP15, seq(field('consequence', $._expression), 'if', field('condition', $._expression), 'else', field('alternative', $._expression)))
        ),

        context_item_expression: $ => '.',

        object_constructor: $ => seq('{', optional(seq(field('element', $._element), repeat(seq(',', field('element', $._element))))), '}'),

        parenthesized_expression: $ => seq('(', field('expression', $._expression), ')'),

        subscript_expression: $ => prec.left(PREC.GROUP2, seq(field('expression', $._expression), '[', field('subscript', $._expression), ']')),

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
