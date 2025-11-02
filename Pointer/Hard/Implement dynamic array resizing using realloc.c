#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = malloc(3 * sizeof(int));
    for (int i = 0; i < 3; i++) arr[i] = i + 1;

    printf("Original: ");
    for (int i = 0; i < 3; i++) printf("%d ", arr[i]);

    arr = realloc(arr, 6 * sizeof(int));
    for (int i = 3; i < 6; i++) arr[i] = (i + 1) * 10;

    printf("\nResized: ");
    for (int i = 0; i < 6; i++) printf("%d ", arr[i]);

    free(arr);
    return 0;
}
