#include <stdio.h>
int main() {
    FILE *fp = fopen("notes.txt", "r");
    int start = 3, line = 1;
    char str[200];
    while (fgets(str, sizeof(str), fp)) {
        if (line++ >= start)
            printf("%s", str);
    }
    fclose(fp);
    return 0;
}
