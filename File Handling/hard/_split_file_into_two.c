#include <stdio.h>
int main() {
    FILE *in = fopen("main.txt", "r");
    FILE *f1 = fopen("part1.txt", "w");
    FILE *f2 = fopen("part2.txt", "w");
    char line[200];
    int count = 0;
    while (fgets(line, sizeof(line), in)) {
        count++;
        if (count <= 5) fputs(line, f1);
        else fputs(line, f2);
    }
    fclose(in); fclose(f1); fclose(f2);
    printf("File split into two.\n");
    return 0;
}
