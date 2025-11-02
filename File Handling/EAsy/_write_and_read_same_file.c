#include <stdio.h>
int main() {
    FILE *fp = fopen("combo.txt", "w+");
    fprintf(fp, "File Handling in C");
    rewind(fp);
    char ch;
    while ((ch = fgetc(fp)) != EOF)
        putchar(ch);
    fclose(fp);
    return 0;
}
