#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int*)malloc(5 * sizeof(int));
    for (int i = 0; i < 5; i++)
        ptr[i] = i + 1;

    printf("Allocated but not freed (simulate leak):\n");
    for (int i = 0; i < 5; i++)
        printf("%d ", ptr[i]);

    // Intentionally not calling free(ptr);
    printf("\nMemory leak simulated.\n");
    return 0;
}
