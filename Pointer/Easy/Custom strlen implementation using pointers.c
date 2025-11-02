#include <stdio.h>

size_t my_strlen(const char *s) {
    const char *p = s;
    while (*p) p++;
    return (size_t)(p - s);
}

int main() {
    const char *str = "Pointer length";
    printf("Length = %zu\n", my_strlen(str));
    return 0;
}
