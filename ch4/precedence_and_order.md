# Precedence and Order of Evaluation in C

The concepts of **precedence** and **order of evaluation** determine the sequence in which operators are evaluated in expressions. Understanding them is crucial to prevent unintended behaviors in your programs.

## Precedence

Operator precedence refers to the hierarchy of the operators. Operators higher in this hierarchy get evaluated before operators lower in the hierarchy. Here's a (non-exhaustive) list of C operators in descending order of precedence:

1. `()` - Parentheses
2. `!`, `~`, `++`, `--`, `+`, `-`, `*`, `&`, `(type)` - Unary operators, sizeof and casts
3. `*`, `/`, `%` - Multiplication, division, and remainder
4. `+`, `-` - Addition and subtraction
5. `<<`, `>>` - Bitwise shift left and right
6. `<`, `<=`, `>`, `>=` - Relational operators
7. `==`, `!=` - Equality and inequality
8. `&` - Bitwise AND
9. `^` - Bitwise XOR
10. `|` - Bitwise OR
11. `&&` - Logical AND
12. `||` - Logical OR
13. `?:` - Ternary conditional
14. `=`, `+=`, `-=`, `*=`, `/=`, `%=`, `<<=`, `>>=`, `&=`, `^=`, `|=` - Assignment operators

Operators at the same level (like `*`, `/`, and `%`) are evaluated based on their associativity.

## Order of Evaluation (Associativity)

Associativity defines the order of operations when operators of the same precedence appear in an expression. Operators can have:

- **Left-to-right associativity**: Operators are evaluated from left to right. For example, the subtraction and addition operators (`+`, `-`) have left-to-right associativity, so `a - b + c` is evaluated as `(a - b) + c`.

- **Right-to-left associativity**: Operators are evaluated from right to left. The unary operators and assignment operators are right-to-left associative. For example, `a = b = c` is equivalent to `a = (b = c)`.

### Examples

1. In the expression `a + b * c`, multiplication has higher precedence than addition, so `b` is multiplied by `c` before adding the result to `a`.

2. In the expression `a * b - c / d`, multiplication and division have the same precedence. Based on their left-to-right associativity, the multiplication (`a * b`) and division (`c / d`) are evaluated first, and then the subtraction takes place.

3. In the expression `a = b = c`, the assignment operator has right-to-left associativity, so `b` is assigned the value of `c` first, and then `a` is assigned the value of `b`.

### Caveats & Recommendations

1. **Side Effects**: The order in which the operands in an expression are evaluated is unspecified in C. For instance, in the expression `f() + g()`, the C standard doesn't guarantee if `f()` will be executed before `g()`.

2. **Parentheses for Clarity**: To ensure clarity and avoid any unintended behaviors, always use parentheses to make the order of evaluation explicit. They not only force the desired order but also make the code more readable.

3. **Complex Expressions**: When writing complex expressions, it's easy to make mistakes or create ambiguities. Splitting them into simpler, smaller expressions can be a good idea.

Remember that while understanding precedence and associativity rules is crucial, relying heavily on them can make your code less readable. Always aim for clear, straightforward expressions.
