#include <stdio.h>

int main() {
    int x = 42;
    int *p = &x;
    int **pp = &p;
    printf("x=%d, *p=%d, **pp=%d\n", x, *p, **pp);
    return 0;
}
