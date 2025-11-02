#include <stdio.h>

int main() {
    char *words[] = {"C", "is", "Powerful"};
    char **ptr = words;

    while (*ptr != NULL) {
        printf("%s ", *ptr);
        ptr++;
    }
    return 0;
}
