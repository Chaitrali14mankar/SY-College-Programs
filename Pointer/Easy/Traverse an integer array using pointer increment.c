#include <stdio.h>

int main() {
    int arr[] = {2, 4, 6, 8, 10};
    int *p = arr;
    printf("Array elements:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(p + i));
    }
    printf("\n");
    return 0;
}
