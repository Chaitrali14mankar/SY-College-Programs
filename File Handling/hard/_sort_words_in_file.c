#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
    FILE *fp = fopen("words.txt", "r");
    char words[100][50];
    int n = 0;
    while (fscanf(fp, "%s", words[n]) != EOF)
        n++;
    fclose(fp);
    qsort(words, n, 50, (int(*)(const void*, const void*))strcmp);
    FILE *out = fopen("sorted.txt", "w");
    for (int i = 0; i < n; i++)
        fprintf(out, "%s\n", words[i]);
    fclose(out);
    printf("Words sorted.\n");
    return 0;
}
