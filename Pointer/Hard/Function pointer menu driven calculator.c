#include <stdio.h>

int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
int divi(int a, int b) { return b ? a / b : 0; }

int main() {
    int a, b, ch;
    int (*ops[])(int, int) = {add, sub, mul, divi};

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("1.Add 2.Sub 3.Mul 4.Div: ");
    scanf("%d", &ch);

    if (ch >= 1 && ch <= 4)
        printf("Result: %d\n", ops[ch - 1](a, b));
    else
        printf("Invalid choice.\n");

    return 0;
}
