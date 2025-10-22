#include <stdio.h>
int main(){
    int n,k; scanf("%d %d",&n,&k); int a[n], i;
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    for(i=0;i<n;i++){
        int sum=0,j;
        for(j=i;j<n;j++){
            sum+=a[j];
            if(sum==k){ printf("Subarray from %d to %d\n", i, j); break; }
        }
    }
    return 0;
}
