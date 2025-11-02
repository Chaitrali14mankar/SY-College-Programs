#include <stdio.h>
int main() {
    FILE *fp = fopen("sample.txt", "r");
    char ch;
    while ((ch = fgetc(fp)) != EOF)
        putchar(ch);
    fclose(fp);
    return 0;
}
