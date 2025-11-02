#include <stdio.h>

void splitWords(char *str) {
    char *p = str;
    while (*p) {
        if (*p == ' ') {
            printf("\n");
        } else {
            printf("%c", *p);
        }
        p++;
    }
}

int main() {
    char str[] = "Pointers are powerful";
    splitWords(str);
    return 0;
}
