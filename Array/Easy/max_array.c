#include <stdio.h>
#include <limits.h>
int main(){
    int n; printf("n: "); if(scanf("%d",&n)!=1) return 0;
    int a[n], i, mx = INT_MIN;
    for(i=0;i<n;i++){ printf("a[%d]: ",i); scanf("%d",&a[i]); if(a[i]>mx) mx=a[i]; }
    printf("Max = %d\n", mx);
    return 0;
}
