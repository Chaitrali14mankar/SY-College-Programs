#include <stdio.h>

int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }

int main() {
    int (*operation)(int, int);
    int choice, x = 10, y = 5;

    printf("1.Add 2.Subtract: ");
    scanf("%d", &choice);

    operation = (choice == 1) ? add : sub;
    printf("Result = %d\n", operation(x, y));
    return 0;
}
