#include <stdio.h>

struct Point {
    int x, y;
};

int main() {
    const struct Point p = {10, 20};
    const struct Point *ptr = &p;

    printf("X=%d Y=%d\n", ptr->x, ptr->y);
    // ptr->x = 50; // Error: read-only structure member
    return 0;
}
