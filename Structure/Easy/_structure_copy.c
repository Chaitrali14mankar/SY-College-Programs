#include <stdio.h>
struct Item { int code; float price; };
int main() {
    struct Item i1 = {101, 55.5};
    struct Item i2 = i1;
    printf("Copied: %d %.2f\n", i2.code, i2.price);
    return 0;
}
