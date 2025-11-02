#include <stdio.h>
struct Circle { float radius; };
int main() {
    struct Circle c = {5.5};
    printf("Area = %.2f\n", 3.14 * c.radius * c.radius);
    return 0;
}
