#include <stdio.h>
int main() {
    FILE *fp = fopen("lines.txt", "r");
    int count = 0;
    char ch;
    while ((ch = fgetc(fp)) != EOF)
        if (ch == '\n')
            count++;
    fclose(fp);
    printf("Total lines: %d", count + 1);
    return 0;
}
