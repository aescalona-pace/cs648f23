# C Programming: Chapter 3 Summary
**"Formatting Output" by K. N. King**

## The `printf` Function
- A function from the standard I/O library used for formatted output.
- Uses format specifiers to control the representation of variables.

## Format Specifiers
- `%d`: for integers
- `%f`: for floating-point numbers
- `%c`: for characters
- `%s`: for strings
- Many other specifiers are available for different data types and formats.

## Flags and Field Widths
- Flags modify the output's appearance, such as adding a leading zero.
- Field widths specify the minimum number of characters to be printed.

**Examples**:
- `printf("%8.2f", number);`: prints the float `number` with a field width of 8 characters and 2 characters after the decimal point.
- `printf("%05d", num);`: prints the integer `num` with leading zeros, making it 5 characters wide.

## Precision with Floating-Point Numbers
- Determines the number of digits to be printed after the decimal point.

**Example**:
- `printf("%.3f", 3.141592);`: prints `3.142`.

## Escape Sequences
- Represent non-graphic characters, such as newline (`\n`), tab (`\t`), etc.

## Miscellaneous
- Introduction to the `#` flag, which has different effects with different format specifiers.
- Using the `*` modifier to specify width and precision from the argument list.

## Exercises
- King's book is known for extensive exercises at the end of each chapter that help reinforce the material.
