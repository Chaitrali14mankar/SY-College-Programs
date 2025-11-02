#include <stdio.h>

void swapStrings(char **a, char **b) {
    char *temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    char *s1 = "Hello";
    char *s2 = "World";
    printf("Before: %s %s\n", s1, s2);
    swapStrings(&s1, &s2);
    printf("After:  %s %s\n", s1, s2);
    return 0;
}
