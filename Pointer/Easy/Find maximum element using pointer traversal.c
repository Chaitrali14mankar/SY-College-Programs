#include <stdio.h>

int max_ptr(int *arr, int n) {
    int m = *arr;
    for (int i = 1; i < n; i++) if (*(arr + i) > m) m = *(arr + i);
    return m;
}

int main() {
    int a[] = {3, 7, 2, 9, 4};
    int n = sizeof(a) / sizeof(a[0]);
    printf("Max = %d\n", max_ptr(a, n));
    return 0;
}
