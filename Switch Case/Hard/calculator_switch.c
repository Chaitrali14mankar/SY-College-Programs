#include <stdio.h>
int main() {
    char op;
    double a, b;
    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);
    switch(op) {
        case '+': printf("%.2lf", a + b); break;
        case '-': printf("%.2lf", a - b); break;
        case '*': printf("%.2lf", a * b); break;
        case '/': (b!=0)? printf("%.2lf", a / b): printf("Error: Divide by 0"); break;
        case '%': printf("%d", (int)a % (int)b); break;
        default: printf("Invalid operator");
    }
    return 0;
}
// calculator_switch.c
