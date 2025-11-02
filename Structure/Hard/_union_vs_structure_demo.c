#include <stdio.h>
union Data { int i; float f; char str[10]; };
struct DataS { int i; float f; char str[10]; };
int main() {
    printf("Size of union = %lu\n", sizeof(union Data));
    printf("Size of structure = %lu\n", sizeof(struct DataS));
    return 0;
}
