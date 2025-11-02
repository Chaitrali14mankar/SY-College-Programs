#include <stdio.h>

int main() {
    int a[3] = {10, 20, 30};
    char b[3] = {'A', 'B', 'C'};

    printf("int pointer +1: %p -> %p\n", (void*)a, (void*)(a + 1));
    printf("char pointer +1: %p -> %p\n", (void*)b, (void*)(b + 1));
    return 0;
}
