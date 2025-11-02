#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n;
    printf("Enter number of strings: ");
    scanf("%d", &n);
    getchar(); // clear newline

    char **arr = malloc(n * sizeof(char*));
    for (int i = 0; i < n; i++) {
        char temp[100];
        printf("Enter string %d: ", i + 1);
        fgets(temp, sizeof(temp), stdin);
        temp[strcspn(temp, "\n")] = '\0';
        arr[i] = malloc(strlen(temp) + 1);
        strcpy(arr[i], temp);
    }

    printf("\nYou entered:\n");
    for (int i = 0; i < n; i++)
        printf("%s\n", arr[i]);

    for (int i = 0; i < n; i++) free(arr[i]);
    free(arr);
    return 0;
}
