#include <stdio.h>
int main() {
    FILE *src = fopen("data.txt", "r");
    FILE *dest = fopen("reverse.txt", "w");
    fseek(src, 0, SEEK_END);
    long pos = ftell(src);
    while (pos--) {
        fseek(src, pos, SEEK_SET);
        fputc(fgetc(src), dest);
    }
    fclose(src);
    fclose(dest);
    printf("File reversed successfully.\n");
    return 0;
}
