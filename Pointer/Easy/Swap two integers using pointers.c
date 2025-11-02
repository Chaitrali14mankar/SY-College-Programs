#include <stdio.h>

int main() {
    int a = 5, b = 10;
    printf("Before: a=%d b=%d\n", a, b);
    int *pa = &a, *pb = &b, temp;
    temp = *pa; *pa = *pb; *pb = temp;
    printf("After:  a=%d b=%d\n", a, b);
    return 0;
}
