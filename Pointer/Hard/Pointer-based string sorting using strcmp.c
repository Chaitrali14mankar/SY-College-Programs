#include <stdio.h>
#include <string.h>

int main() {
    char *words[] = {"apple", "banana", "grape", "cherry"};
    int n = 4;

    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (strcmp(words[i], words[j]) > 0) {
                char *temp = words[i];
                words[i] = words[j];
                words[j] = temp;
            }

    for (int i = 0; i < n; i++)
        printf("%s\n", words[i]);
    return 0;
}
