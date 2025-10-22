#include <stdio.h>
int main(){
    int n,k,i; scanf("%d",&n); int a[n]; for(i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&k); k%=n;
    int temp[k]; for(i=0;i<k;i++) temp[i]=a[n-k+i];
    for(i=n-1;i>=k;i--) a[i]=a[i-k];
    for(i=0;i<k;i++) a[i]=temp[i];
    printf("After rotation: "); for(i=0;i<n;i++) printf("%d ",a[i]); printf("\n");
    return 0;
}
