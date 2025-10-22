#include <stdio.h>
#include <limits.h>
int main(){
    int n, i, mx=INT_MIN, mn=INT_MAX;
    printf("n: "); scanf("%d",&n);
    int a[n]; for(i=0;i<n;i++){ scanf("%d",&a[i]); if(a[i]>mx) mx=a[i]; if(a[i]<mn) mn=a[i]; }
    printf("Difference = %d\n", mx-mn);
    return 0;
}
