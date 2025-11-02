#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Pointers";
    char *start = str, *end = str + strlen(str) - 1;
    char temp;

    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }

    printf("Reversed: %s\n", str);
    return 0;
}
