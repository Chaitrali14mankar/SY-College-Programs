#include <stdio.h>
#include <string.h>
int main() {
    FILE *in = fopen("data.txt", "r");
    FILE *out = fopen("new.txt", "w");
    char word[100];
    while (fscanf(in, "%s", word) != EOF) {
        if (strcmp(word, "old") == 0)
            fprintf(out, "new ");
        else
            fprintf(out, "%s ", word);
    }
    fclose(in);
    fclose(out);
    printf("Word replaced.\n");
    return 0;
}
