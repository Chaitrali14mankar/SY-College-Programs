#include <stdio.h>
int main() {
    FILE *src = fopen("data.txt", "r");
    FILE *backup = fopen("backup_data.txt", "w");
    char ch;
    while ((ch = fgetc(src)) != EOF)
        fputc(ch, backup);
    fclose(src);
    fclose(backup);
    printf("Backup created successfully!\n");
    return 0;
}
