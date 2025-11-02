#include <stdio.h>
#include <string.h>
int main() {
    FILE *fp = fopen("filenames.txt", "r");
    FILE *out = fopen("txtfiles.txt", "w");
    char name[100];
    while (fscanf(fp, "%s", name) != EOF)
        if (strstr(name, ".txt"))
            fprintf(out, "%s\n", name);
    fclose(fp);
    fclose(out);
    printf("Filtered .txt filenames.\n");
    return 0;
}
