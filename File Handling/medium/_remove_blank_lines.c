#include <stdio.h>
#include <string.h>
int main() {
    FILE *in = fopen("input.txt", "r");
    FILE *out = fopen("output.txt", "w");
    char line[200];
    while (fgets(line, sizeof(line), in)) {
        if (strcmp(line, "\n") != 0)
            fputs(line, out);
    }
    fclose(in);
    fclose(out);
    printf("Blank lines removed.\n");
    return 0;
}
