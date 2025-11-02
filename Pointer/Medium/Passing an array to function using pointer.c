#include <stdio.h>

void display(int *arr, int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", *(arr + i));
}

int main() {
    int a[] = {2, 4, 6, 8, 10};
    int n = sizeof(a) / sizeof(a[0]);
    display(a, n);
    return 0;
}
