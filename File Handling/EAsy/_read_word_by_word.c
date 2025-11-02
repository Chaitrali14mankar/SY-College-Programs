#include <stdio.h>
int main() {
    FILE *fp = fopen("words.txt", "r");
    char word[50];
    while (fscanf(fp, "%s", word) != EOF)
        printf("%s\n", word);
    fclose(fp);
    return 0;
}
