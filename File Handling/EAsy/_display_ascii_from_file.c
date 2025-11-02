#include <stdio.h>
int main() {
    FILE *fp = fopen("ascii.txt", "r");
    char ch;
    while ((ch = fgetc(fp)) != EOF)
        printf("%c -> %d\n", ch, ch);
    fclose(fp);
    return 0;
}
