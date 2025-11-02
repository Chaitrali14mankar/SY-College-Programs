#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int *l = arr, *r = arr + n - 1;
    while (l < r) {
        int t = *l; *l = *r; *r = t;
        l++; r--;
    }
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
