#include <stdio.h>
#include <string.h>
int main() {
    FILE *fp = fopen("text.txt", "r");
    char line[256], longest[256] = "";
    while (fgets(line, sizeof(line), fp))
        if (strlen(line) > strlen(longest))
            strcpy(longest, line);
    fclose(fp);
    printf("Longest line: %s\n", longest);
    return 0;
}
