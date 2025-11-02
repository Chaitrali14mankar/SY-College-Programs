#include <stdio.h>
int main() {
    FILE *fp = fopen("lines.txt", "w");
    fprintf(fp, "First line\nSecond line\nThird line");
    fclose(fp);
    return 0;
}
