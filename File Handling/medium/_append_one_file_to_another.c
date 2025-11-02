#include <stdio.h>
int main() {
    FILE *f1 = fopen("main.txt", "a");
    FILE *f2 = fopen("extra.txt", "r");
    char ch;
    while ((ch = fgetc(f2)) != EOF)
        fputc(ch, f1);
    fclose(f1);
    fclose(f2);
    printf("File appended.\n");
    return 0;
}
