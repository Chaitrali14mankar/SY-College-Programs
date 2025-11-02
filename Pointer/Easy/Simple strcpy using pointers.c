#include <stdio.h>

void my_strcpy(char *dest, const char *src) {
    while ((*dest++ = *src++));
}

int main() {
    char dst[50];
    my_strcpy(dst, "Copy this string");
    puts(dst);
    return 0;
}
