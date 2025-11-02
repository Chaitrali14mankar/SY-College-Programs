#include <stdio.h>
int main() {
    FILE *fp = fopen("test.txt", "r");
    if (fp)
        printf("File exists!");
    else
        printf("File not found!");
    fclose(fp);
    return 0;
}
