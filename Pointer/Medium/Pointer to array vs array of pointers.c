#include <stdio.h>

int main() {
    int arr[3] = {1, 2, 3};
    int (*p1)[3] = &arr;
    int *p2[3] = {arr, arr + 1, arr + 2};

    printf("Pointer to array: %d %d %d\n", (*p1)[0], (*p1)[1], (*p1)[2]);
    printf("Array of pointers: %d %d %d\n", *p2[0], *p2[1], *p2[2]);
    return 0;
}
