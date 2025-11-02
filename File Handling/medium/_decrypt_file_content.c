#include <stdio.h>
int main() {
    FILE *in = fopen("encrypted.txt", "r");
    FILE *out = fopen("decrypted.txt", "w");
    char ch;
    while ((ch = fgetc(in)) != EOF)
        fputc(ch - 3, out);
    fclose(in);
    fclose(out);
    printf("File decrypted.\n");
    return 0;
}
