#include <stdio.h>
int main(){
    int n; printf("n: "); scanf("%d",&n);
    int a[n], i; for(i=0;i<n;i++) scanf("%d",&a[i]);
    int max_so_far=a[0], max_ending=a[0];
    for(i=1;i<n;i++){
        if(max_ending+a[i]>a[i]) max_ending+=a[i];
        else max_ending=a[i];
        if(max_ending>max_so_far) max_so_far=max_ending;
    }
    printf("Maximum subarray sum = %d\n", max_so_far);
    return 0;
}
