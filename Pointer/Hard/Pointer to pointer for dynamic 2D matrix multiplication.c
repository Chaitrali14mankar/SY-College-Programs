#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 2;
    int **a = malloc(n * sizeof(int*));
    int **b = malloc(n * sizeof(int*));
    int **c = malloc(n * sizeof(int*));

    for (int i = 0; i < n; i++) {
        a[i] = malloc(n * sizeof(int));
        b[i] = malloc(n * sizeof(int));
        c[i] = malloc(n * sizeof(int));
    }

    printf("Enter A and B matrices (%dx%d):\n", n, n);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &b[i][j]);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            c[i][j] = 0;
            for (int k = 0; k < n; k++)
                c[i][j] += a[i][k] * b[k][j];
        }

    printf("Result:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%d ", c[i][j]);
        printf("\n");
    }

    for (int i = 0; i < n; i++) {
        free(a[i]); free(b[i]); free(c[i]);
    }
    free(a); free(b); free(c);
    return 0;
}
