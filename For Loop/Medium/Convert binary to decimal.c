#include <stdio.h>
int main() {
    int bin=1011, dec=0, base=1;
    for(; bin>0; bin/=10) {
        int d=bin%10;
        dec+=d*base;
        base*=2;
    }
    printf("Decimal = %d", dec);
    return 0;
}
