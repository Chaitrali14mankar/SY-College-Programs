#include <stdio.h>
#include <ctype.h>
int main() {
    FILE *fp = fopen("text.txt", "r");
    char ch;
    int count = 0;
    while ((ch = fgetc(fp)) != EOF)
        if (strchr("AEIOUaeiou", ch))
            count++;
    fclose(fp);
    printf("Vowel count: %d\n", count);
    return 0;
}
