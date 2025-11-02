#include <stdio.h>

int compareAsc(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int compareDesc(const void *a, const void *b) {
    return (*(int*)b - *(int*)a);
}

void sort(int *arr, int n, int (*cmp)(const void*, const void*)) {
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (cmp(&arr[i], &arr[j]) > 0) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
}

int main() {
    int arr[] = {5, 2, 9, 1, 6};
    int n = 5;

    sort(arr, n, compareAsc);
    printf("Ascending: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);

    sort(arr, n, compareDesc);
    printf("\nDescending: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}
