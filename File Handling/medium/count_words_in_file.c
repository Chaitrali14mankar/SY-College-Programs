#include <stdio.h>
#include <ctype.h>
int main() {
    FILE *fp = fopen("sample.txt", "r");
    char ch;
    int count = 0, inWord = 0;
    while ((ch = fgetc(fp)) != EOF) {
        if (isspace(ch))
            inWord = 0;
        else if (!inWord) {
            inWord = 1;
            count++;
        }
    }
    fclose(fp);
    printf("Total words: %d\n", count);
    return 0;
}
