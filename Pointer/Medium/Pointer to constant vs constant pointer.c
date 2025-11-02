#include <stdio.h>

int main() {
    int a = 10, b = 20;
    const int *p1 = &a; // pointer to constant
    int *const p2 = &a; // constant pointer

    p1 = &b; // allowed
    *p2 = 30; // allowed

    printf("a=%d b=%d\n", a, b);
    return 0;
}
