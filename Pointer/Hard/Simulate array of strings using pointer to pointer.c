#include <stdio.h>

int main() {
    char *(*arr)[3];
    static char *words[] = {"Pointer", "to", "Pointer"};
    arr = &words;

    for (int i = 0; i < 3; i++)
        printf("%s ", (*arr)[i]);
    return 0;
}
