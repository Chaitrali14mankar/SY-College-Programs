#include <stdio.h>
int main(){
    int n,i; scanf("%d",&n); int a[n];
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    int profit=0;
    for(i=1;i<n;i++) if(a[i]>a[i-1]) profit+=a[i]-a[i-1];
    printf("Maximum profit = %d\n", profit);
    return 0;
}
