#include <stdio.h>
int main() {
    int n,dec=0,base=1;
    printf("Enter binary: ");
    scanf("%d",&n);
    for(;n>0;n/=10) {
        int d=n%10;
        dec+=d*base;
        base*=2;
    }
    printf("Decimal = %d",dec);
    return 0;
}
