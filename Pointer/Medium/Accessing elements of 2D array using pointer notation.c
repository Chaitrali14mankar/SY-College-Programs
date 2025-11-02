#include <stdio.h>

int main() {
    int a[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int *p = &a[0][0];

    printf("Elements:\n");
    for (int i = 0; i < 6; i++)
        printf("%d ", *(p + i));
    printf("\n");
    return 0;
}
