const PREC = {
    GROUP16: -2,
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
        [$.for_statement, $.object_constructor],
        [$.if_statement, $.object_constructor],
        [$.while_statement, $.object_constructor],
        [$.function_declaration, $.variable]
    ],

    rules: {

        module: $ => seq(
            repeat(field('statement', $._statement)), optional(field('expression', $._expression))
        ),

        _statement: $ => choice(
            $.break_statement,
            $.continue_statement,
            $.empty_statement,
            $.expression_statement,
            $.for_statement,
            $.function_declaration,
            $.if_statement,
            $.resource_declaration,
            $.return_statement,
            $.while_statement
        ),

        break_statement: $ => seq('break', ';'),

        continue_statement: $ => seq('continue', ';'),

        empty_statement: $ => ';',

        expression_statement: $ => seq(field('expression', $._expression), ';'),

        for_statement: $ => choice(
            seq('for', '(', field('iterator', $.for_iterator), repeat(seq(',', field('iterator', $.for_iterator))), ')', field('statement', $._statement)),
            seq('for', '(', field('iterator', $.for_iterator), repeat(seq(',', field('iterator', $.for_iterator))), ')', '{', repeat(field('statement', $._statement)), '}')
        ),

        for_iterator: $ => seq(field('name', $.name), optional(seq('in', field('context', $._single_expression)))),

        function_declaration: $ => choice(
            seq(field('name', $.name), '(', optional(seq(field('parameter', $._parameter), repeat(seq(',', field('parameter', $._parameter))))), ')', '{', repeat(field('statement', $._statement)), '}'),
            seq(field('name', $.name), '(', optional(seq(field('parameter', $._parameter), repeat(seq(',', field('parameter', $._parameter))))), ')', '=>', field('expression', $._expression), ';')
        ),

        _parameter: $ => choice(
            $.simple_parameter
        ),

        simple_parameter: $ => seq(field('name', $.name), optional(seq('=', field('defaultValue', $._single_expression)))),

        if_statement: $ => choice(
            seq('if', '(', field('condition', $._single_expression), ')', field('statement', $._statement)),
            seq('if', '(', field('condition', $._single_expression), ')', '{', repeat(field('statement', $._statement)), '}')
        ),

        resource_declaration: $ => prec(PREC.GROUP14, seq(
            field('name', $.name),
            choice(
                seq(':', field('superClass', $._class_expression), repeat(seq(',', field('superClass', $._class_expression))), ';'),
                seq(optional(seq(':', field('superClass', $._class_expression), repeat(seq(',', field('superClass', $._class_expression))))), field('properties', $.object_constructor))
            )
        )),

        return_statement: $ => seq('return', optional(field('value', $._expression)), ';'),

        while_statement: $ => choice(
            seq('while', '(', field('condition', $._single_expression), ')', field('statement', $._statement)),
            seq('while', '(', field('condition', $._single_expression), ')', '{', repeat(field('statement', $._statement)), '}')
        ),

        _class_expression: $ => choice(
            $.class
        ),

        class: $ => field('name', $.name),

        _expression: $ => choice(
            $._single_expression
        ),

        _single_expression: $ => choice(
            $._literal,
            $.array_constructor,
            $.binary_expression,
            $.call_expression,
            $.conditional_expression,
            $.context_item_expression,
            $.field_expression,
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

        call_expression: $ => prec.left(PREC.GROUP2, seq(field('function', $._single_expression), '(', optional(seq(field('argument', $._argument), repeat(seq(',', field('argument', $._argument))))), ')')),

        _argument: $ => choice(
            $.named_argument,
            $.positional_argument
        ),

        named_argument: $ => seq(field('name', $.name), ':', field('value', $._single_expression)),

        positional_argument: $ => field('value', $._single_expression),

        conditional_expression: $ => prec.right(PREC.GROUP15, seq(
            field('consequence', $._single_expression), 'if', field('condition', $._single_expression), 'else', field('alternative', $._single_expression)
        )),

        context_item_expression: $ => '.',

        field_expression: $ => prec.left(PREC.GROUP2, choice(
            seq(field('argument', $._single_expression), '.', field('field', $.name)),
            seq(field('argument', $._single_expression), '.', '(', field('field', $._single_expression), ')'),
        )),

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

        subscript_expression: $ => prec.left(PREC.GROUP2, seq(field('expression', $._single_expression), '[', field('subscript', $._single_expression), repeat(seq(',', field('subscript', $._single_expression))), ']')),

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
