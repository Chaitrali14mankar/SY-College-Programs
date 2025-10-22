#include <stdio.h>
#include <limits.h>
int main(){
    int n; printf("n: "); if(scanf("%d",&n)!=1) return 0;
    int a[n], i, mn = INT_MAX;
    for(i=0;i<n;i++){ printf("a[%d]: ",i); scanf("%d",&a[i]); if(a[i]<mn) mn=a[i]; }
    printf("Min = %d\n", mn);
    return 0;
}
