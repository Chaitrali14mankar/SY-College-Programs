#include <stdio.h>
int main() {
    FILE *f1 = fopen("a.txt", "r");
    FILE *f2 = fopen("b.txt", "r");
    char c1, c2;
    int line = 1, diff = 0;
    while ((c1 = fgetc(f1)) != EOF && (c2 = fgetc(f2)) != EOF) {
        if (c1 != c2) {
            printf("Difference at line %d\n", line);
            diff = 1;
            break;
        }
        if (c1 == '\n') line++;
    }
    if (!diff) printf("Files are identical.\n");
    fclose(f1);
    fclose(f2);
    return 0;
}
