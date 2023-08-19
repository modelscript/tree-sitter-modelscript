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
            repeat(field('statement', $._statement)), optional(field('expression', $._expression))
        ),

        _statement: $ => choice(
            $.expression_statement,
            $.resource_declaration
        ),

        expression_statement: $ => seq(field('expression', $._expression), ';'),

        resource_declaration: $ => prec(PREC.GROUP14, seq(
            field('resource', $.name),
            choice(
                seq(':', field('class', $._class_expression), repeat(seq(',', field('class', $._class_expression))), ';'),
                seq(optional(seq(':', field('class', $._class_expression), repeat(seq(',', field('class', $._class_expression))))), field('object', $.object_constructor), optional(';'))
            )
        )),

        _class_expression: $ => choice(
            $.class
        ),

        class: $ => field('name', $.name),

        _expression: $ => choice(
            $._single_expression,
            $.relation_expression
        ),

        relation_expression: $ => seq(field('subject', $._single_expression), field('property', $._single_expression), field('object', $._single_expression)),

        _single_expression: $ => choice(
            $._literal,
            $.array_constructor,
            $.binary_expression,
            $.conditional_expression,
            $.context_item_expression,
            $.object_constructor,
            $.parenthesized_expression,
            $.quantified_expression,
            $.subscript_expression,
            $.unary_expression,
            $.variable
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
                    field('operand1', $._single_expression),
                    field('operator', operator),
                    field('operand2', $._single_expression)
                ));
            }));
        },

        conditional_expression: $ => choice(
            prec.right(PREC.GROUP15, seq(field('condition', $._single_expression), '?', field('consequence', $._single_expression), ':', field('alternative', $._single_expression))),
            prec.right(PREC.GROUP15, seq(field('consequence', $._single_expression), 'if', field('condition', $._single_expression), 'else', field('alternative', $._single_expression)))
        ),

        context_item_expression: $ => '.',

        object_constructor: $ => seq('{', optional(seq(field('element', $._element), repeat(seq(',', field('element', $._element))))), '}'),

        parenthesized_expression: $ => seq('(', field('expression', $._expression), ')'),

        quantified_expression: $ => seq(
            field('quantifierClause', $.quantifier_clause),
            repeat(seq(',', field('quantifierClause', $.quantifier_clause))),
            optional(seq('where', field('condition', $._single_expression))),
            'satisfies', field('predicate', $._single_expression)
        ),

        quantifier_clause: $ => prec.left(seq(
            field('type', choice('every', 'some')),
            field('quantifier', $.quantifier),
            repeat(seq(',', field('quantifier', $.quantifier)))
        )),

        quantifier: $ => seq(field('name', $.name), optional(seq('in', field('context', $._single_expression)))),

        subscript_expression: $ => prec.left(PREC.GROUP2, seq(field('expression', $._single_expression), '[', field('subscript', $._expression), ']')),

        unary_expression: $ => prec.right(PREC.GROUP3, seq(
            field('operator', choice('+', '-', '~', '!')),
            field('operand', $._single_expression),
        )),

        variable: $ => field('name', $.name),

        _element: $ => choice(
            $.keyed_element,
            $.unkeyed_element
        ),

        keyed_element: $ => seq(field('key', $._single_expression), ':', field('value', $._expression)),

        unkeyed_element: $ => field('value', $._expression),

        name: $ => /[A-Z_a-z][A-Z_a-z0-9]*/

    }

});
