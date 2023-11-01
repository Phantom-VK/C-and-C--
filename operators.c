#include <stdio.h>

int main() {
    int a = 10, b = 5, result;

    // Arithmetic operators
    result = a + b;
    printf("Addition: %d + %d = %d\n", a, b, result);
    result = a - b;
    printf("Subtraction: %d - %d = %d\n", a, b, result);
    result = a * b;
    printf("Multiplication: %d * %d = %d\n", a, b, result);
    result = a / b;
    printf("Division: %d / %d = %d\n", a, b, result);
    result = a % b;
    printf("Modulus: %d %% %d = %d\n", a, b, result);

    // Relational operators
    printf("Relational operators:\n");
    printf("%d == %d: %d\n", a, b, a == b);
    printf("%d != %d: %d\n", a, b, a != b);
    printf("%d > %d: %d\n", a, b, a > b);
    printf("%d < %d: %d\n", a, b, a < b);
    printf("%d >= %d: %d\n", a, b, a >= b);
    printf("%d <= %d: %d\n", a, b, a <= b);

    // Logical operators
    int x = 1, y = 0;
    printf("Logical operators:\n");
    printf("%d && %d: %d\n", x, y, x && y);
    printf("%d || %d: %d\n", x, y, x || y);
    printf("!(%d): %d\n", x, !x);

    // Bitwise operators
    int c = 5, d = 3;
    printf("Bitwise operators:\n");
    printf("%d & %d: %d\n", c, d, c & d);
    printf("%d | %d: %d\n", c, d, c | d);
    printf("%d ^ %d: %d\n", c, d, c ^ d);
    printf("~%d: %d\n", c, ~c);
    printf("%d << 1: %d\n", c, c << 1);
    printf("%d >> 1: %d\n", c, c >> 1);

    // Assignment operators
    int e = 10;
    printf("Assignment operators:\n");
    printf("e = %d\n", e);
    e += 5;
    printf("e += 5: e = %d\n", e);
    e -= 3;
    printf("e -= 3: e = %d\n", e);
    e *= 2;
    printf("e *= 2: e = %d\n", e);
    e /= 4;
    printf("e /= 4: e = %d\n", e);

    // Conditional (Ternary) operator
    int f = 10, g = 5;
    result = (f > g) ? f : g;
    printf("Conditional operator:\n");
    printf("The larger value between %d and %d is %d\n", f, g, result);

    return 0;
}
