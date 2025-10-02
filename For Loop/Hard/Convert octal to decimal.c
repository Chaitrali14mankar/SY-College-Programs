#include <stdio.h>
int main() {
    int n,dec=0,base=1;
    printf("Enter octal: ");
    scanf("%d",&n);
    for(;n>0;n/=10) {
        int d=n%10;
        dec+=d*base;
        base*=8;
    }
    printf("Decimal = %d",dec);
    return 0;
}
