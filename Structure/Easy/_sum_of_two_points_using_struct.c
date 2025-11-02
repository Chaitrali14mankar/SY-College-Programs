#include <stdio.h>
struct Point { int x, y; };
int main() {
    struct Point p1={3,4}, p2={5,6}, sum;
    sum.x = p1.x + p2.x;
    sum.y = p1.y + p2.y;
    printf("Sum: (%d, %d)\n", sum.x, sum.y);
    return 0;
}
