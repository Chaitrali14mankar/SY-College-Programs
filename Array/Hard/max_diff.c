#include <stdio.h>
#include <limits.h>
int main(){
    int n,i; scanf("%d",&n); int a[n];
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    int min=a[0], max_diff=INT_MIN;
    for(i=1;i<n;i++){
        if(a[i]-min>max_diff) max_diff=a[i]-min;
        if(a[i]<min) min=a[i];
    }
    printf("Max difference = %d\n", max_diff);
    return 0;
}
