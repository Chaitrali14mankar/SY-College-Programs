#include <stdio.h>
int main() {
    FILE *fp = fopen("demo.txt", "r");
    fseek(fp, 0, SEEK_END);
    long size = ftell(fp);
    fclose(fp);
    printf("File size: %ld bytes", size);
    return 0;
}
