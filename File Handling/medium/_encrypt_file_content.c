#include <stdio.h>
int main() {
    FILE *in = fopen("plain.txt", "r");
    FILE *out = fopen("encrypted.txt", "w");
    char ch;
    while ((ch = fgetc(in)) != EOF)
        fputc(ch + 3, out); // Caesar cipher
    fclose(in);
    fclose(out);
    printf("File encrypted.\n");
    return 0;
}
