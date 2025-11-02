#include <stdio.h>
struct Rectangle { int l, b; };
struct Rectangle getRect() {
    struct Rectangle r = {10, 5};
    return r;
}
int main() {
    struct Rectangle r = getRect();
    printf("Length=%d Breadth=%d\n", r.l, r.b);
    return 0;
}
