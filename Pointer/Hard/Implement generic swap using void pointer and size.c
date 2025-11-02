#include <stdio.h>
#include <string.h>

void swap(void *a, void *b, int size) {
    char temp[size];
    memcpy(temp, a, size);
    memcpy(a, b, size);
    memcpy(b, temp, size);
}

int main() {
    int x = 10, y = 20;
    swap(&x, &y, sizeof(int));
    printf("x=%d y=%d\n", x, y);

    double p = 1.1, q = 2.2;
    swap(&p, &q, sizeof(double));
    printf("p=%.1f q=%.1f\n", p, q);

    return 0;
}
