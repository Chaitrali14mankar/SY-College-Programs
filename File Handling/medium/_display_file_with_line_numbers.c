#include <stdio.h>
int main() {
    FILE *fp = fopen("code.txt", "r");
    char line[200];
    int n = 1;
    while (fgets(line, sizeof(line), fp))
        printf("%d: %s", n++, line);
    fclose(fp);
    return 0;
}
