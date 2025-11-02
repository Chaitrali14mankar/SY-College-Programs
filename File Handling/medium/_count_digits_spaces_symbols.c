#include <stdio.h>
#include <ctype.h>
int main() {
    FILE *fp = fopen("text.txt", "r");
    char ch;
    int digits=0, spaces=0, symbols=0;
    while ((ch = fgetc(fp)) != EOF) {
        if (isdigit(ch)) digits++;
        else if (isspace(ch)) spaces++;
        else if (!isalpha(ch)) symbols++;
    }
    fclose(fp);
    printf("Digits: %d Spaces: %d Symbols: %d\n", digits, spaces, symbols);
    return 0;
}
