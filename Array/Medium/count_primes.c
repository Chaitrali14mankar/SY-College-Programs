#include <stdio.h>
#include <math.h>
int isPrime(int x){
    if(x<2) return 0;
    for(int i=2;i<=sqrt(x);i++) if(x%i==0) return 0;
    return 1;
}
int main(){
    int n, i, count=0; 
    printf("n: "); scanf("%d",&n);
    int a[n]; for(i=0;i<n;i++) scanf("%d",&a[i]);
    for(i=0;i<n;i++) if(isPrime(a[i])) count++;
    printf("Number of primes = %d\n", count);
    return 0;
}
