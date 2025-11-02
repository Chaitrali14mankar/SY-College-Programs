#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows, cols;
    printf("Enter rows and cols: ");
    scanf("%d %d", &rows, &cols);

    int **arr = (int**)malloc(rows * sizeof(int*));
    for (int i = 0; i < rows; i++)
        arr[i] = (int*)malloc(cols * sizeof(int));

    printf("Enter elements:\n");
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &arr[i][j]);

    printf("Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }

    for (int i = 0; i < rows; i++) free(arr[i]);
    free(arr);
    return 0;
}
