#include <stdio.h>
int main(){
    int n; printf("n: "); if(scanf("%d",&n)!=1) return 0;
    int a[n], i, even=0, odd=0;
    for(i=0;i<n;i++){ scanf("%d",&a[i]); if(a[i]%2==0) even++; else odd++; }
    printf("Even = %d, Odd = %d\n", even, odd);
    return 0;
}
