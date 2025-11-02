#include <stdio.h>

int my_strcmp(const char *a, const char *b) {
    while (*a && (*a == *b)) { a++; b++; }
    return (unsigned char)*a - (unsigned char)*b;
}

int main() {
    printf("%d\n", my_strcmp("abc", "abd")); // negative because 'c' < 'd'
    printf("%d\n", my_strcmp("same", "same")); // zero
    return 0;
}
