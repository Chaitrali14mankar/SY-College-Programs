#include <stdio.h>
#include <string.h>
int main() {
    FILE *in = fopen("lines.txt", "r");
    FILE *out = fopen("reversed.txt", "w");
    char line[200];
    while (fgets(line, sizeof(line), in)) {
        int len = strlen(line);
        for (int i = len - 1; i >= 0; i--)
            fputc(line[i], out);
    }
    fclose(in);
    fclose(out);
    printf("Each line reversed.\n");
    return 0;
}
