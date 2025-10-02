#include <stdio.h>
int main() {
    int a=36, b=60, c=24, gcd=1;
    for(int i=1; i<=a && i<=b && i<=c; i++) {
        if(a%i==0 && b%i==0 && c%i==0) gcd=i;
    }
    printf("HCF = %d", gcd);
    return 0;
}
