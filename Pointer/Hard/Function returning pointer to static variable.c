#include <stdio.h>

int* counter() {
    static int count = 0;
    count++;
    return &count;
}

int main() {
    int *p1 = counter();
    int *p2 = counter();
    printf("Counts: %d %d\n", *p1, *p2);
    return 0;
}
