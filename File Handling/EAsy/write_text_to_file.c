#include <stdio.h>
int main() {
    FILE *fp = fopen("sample.txt", "w");
    fprintf(fp, "Hello, world!");
    fclose(fp);
    return 0;
}
