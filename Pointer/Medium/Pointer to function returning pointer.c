#include <stdio.h>

int* max(int *x, int *y) {
    return (*x > *y) ? x : y;
}

int main() {
    int a = 12, b = 20;
    int *m = max(&a, &b);
    printf("Max = %d\n", *m);
    return 0;
}
