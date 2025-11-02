#include <stdio.h>
struct Distance { int feet; float inch; };
int main() {
    struct Distance d1={5,7.5}, d2={3,9.2}, sum;
    sum.feet = d1.feet + d2.feet;
    sum.inch = d1.inch + d2.inch;
    if(sum.inch >= 12){ sum.feet++; sum.inch -= 12; }
    printf("Sum = %d'-%.1f\"\n", sum.feet, sum.inch);
    return 0;
}
