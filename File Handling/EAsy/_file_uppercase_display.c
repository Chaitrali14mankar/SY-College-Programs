#include <stdio.h>
#include <ctype.h>
int main() {
    FILE *fp = fopen("text.txt", "r");
    char ch;
    while ((ch = fgetc(fp)) != EOF)
        putchar(toupper(ch));
    fclose(fp);
    return 0;
}
