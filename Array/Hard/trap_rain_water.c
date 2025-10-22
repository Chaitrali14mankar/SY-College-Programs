#include <stdio.h>
int main(){
    int n,i; scanf("%d",&n); int a[n];
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    int left[n], right[n], water=0;
    left[0]=a[0]; for(i=1;i<n;i++) left[i]=(a[i]>left[i-1]?a[i]:left[i-1]);
    right[n-1]=a[n-1]; for(i=n-2;i>=0;i--) right[i]=(a[i]>right[i+1]?a[i]:right[i+1]);
    for(i=0;i<n;i++) water+=(left[i]<right[i]?left[i]:right[i])-a[i];
    printf("Trapped water = %d\n", water);
    return 0;
}
