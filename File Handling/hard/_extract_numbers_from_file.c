#include <stdio.h>
int main() {
    FILE *in = fopen("mixed.txt", "r");
    FILE *out = fopen("numbers.txt", "w");
    char ch;
    while ((ch = fgetc(in)) != EOF)
        if (ch >= '0' && ch <= '9')
            fputc(ch, out);
    fclose(in);
    fclose(out);
    printf("Numbers extracted.\n");
    return 0;
}
