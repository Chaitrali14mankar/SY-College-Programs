#include <stdio.h>
struct Point { int x, y; };
void display(struct Point p) {
    printf("X=%d Y=%d\n", p.x, p.y);
}
int main() {
    struct Point p1 = {5, 10};
    display(p1);
    return 0;
}
