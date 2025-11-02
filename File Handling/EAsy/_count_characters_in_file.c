#include <stdio.h>
int main() {
    FILE *fp = fopen("sample.txt", "r");
    int count = 0;
    char ch;
    while ((ch = fgetc(fp)) != EOF)
        count++;
    fclose(fp);
    printf("Total characters: %d", count);
    return 0;
}
