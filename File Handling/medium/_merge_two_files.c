#include <stdio.h>
int main() {
    FILE *f1 = fopen("a.txt", "r");
    FILE *f2 = fopen("b.txt", "r");
    FILE *merge = fopen("merged.txt", "w");
    char ch;
    while ((ch = fgetc(f1)) != EOF)
        fputc(ch, merge);
    while ((ch = fgetc(f2)) != EOF)
        fputc(ch, merge);
    fclose(f1); fclose(f2); fclose(merge);
    printf("Files merged successfully.\n");
    return 0;
}
