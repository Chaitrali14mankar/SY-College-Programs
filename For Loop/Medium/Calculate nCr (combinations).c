#include <stdio.h>
int fact(int n) {
    int f=1;
    for(int i=1; i<=n; i++) f*=i;
    return f;
}
int main() {
    int n=5, r=2;
    int ncr=fact(n)/(fact(r)*fact(n-r));
    printf("nCr = %d", ncr);
    return 0;
}
