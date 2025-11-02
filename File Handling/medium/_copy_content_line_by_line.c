#include <stdio.h>
int main() {
    FILE *src = fopen("source.txt", "r");
    FILE *dest = fopen("target.txt", "w");
    char line[256];
    while (fgets(line, sizeof(line), src))
        fputs(line, dest);
    fclose(src);
    fclose(dest);
    printf("Copied line by line.\n");
    return 0;
}
