#include <stdio.h>
int main(){
    int n; printf("n: "); if(scanf("%d",&n)!=1) return 0;
    long long prod=1; int i; long long x;
    for(i=0;i<n;i++){ scanf("%lld",&x); prod*=x; }
    printf("Product = %lld\n", prod);
    return 0;
}
