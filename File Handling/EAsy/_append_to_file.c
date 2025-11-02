#include <stdio.h>
int main() {
    FILE *fp = fopen("data.txt", "a");
    fprintf(fp, "\nAppended text!");
    fclose(fp);
    return 0;
}
