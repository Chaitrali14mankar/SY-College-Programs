#include <stdio.h>

void calc(int a, int b, int *sum, int *prod) {
    *sum = a + b;
    *prod = a * b;
}

int main() {
    int a = 5, b = 4, s, p;
    calc(a, b, &s, &p);
    printf("Sum=%d Product=%d\n", s, p);
    return 0;
}
