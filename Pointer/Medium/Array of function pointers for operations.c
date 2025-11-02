#include <stdio.h>

int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }

int main() {
    int (*ops[3])(int, int) = {add, sub, mul};
    int x = 8, y = 4;

    for (int i = 0; i < 3; i++)
        printf("Result %d = %d\n", i + 1, ops[i](x, y));
    return 0;
}
