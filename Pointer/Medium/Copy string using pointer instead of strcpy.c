#include <stdio.h>

int main() {
    char src[] = "Pointer Example";
    char dest[50];
    char *s = src, *d = dest;

    while (*s != '\0') {
        *d = *s;
        s++;
        d++;
    }
    *d = '\0';

    printf("Copied String: %s\n", dest);
    return 0;
}
