#include <stdio.h>

int main() {
    const char *s = "Hello, pointers!";
    const char *p;
    for (p = s; *p; p++) putchar(*p);
    putchar('\n');
    return 0;
}
