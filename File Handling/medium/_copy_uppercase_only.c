#include <stdio.h>
#include <ctype.h>
int main() {
    FILE *in = fopen("input.txt", "r");
    FILE *out = fopen("upper.txt", "w");
    char ch;
    while ((ch = fgetc(in)) != EOF)
        if (isupper(ch))
            fputc(ch, out);
    fclose(in);
    fclose(out);
    printf("Copied uppercase letters.\n");
    return 0;
}
