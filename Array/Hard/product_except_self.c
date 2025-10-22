#include <stdio.h>
int main(){
    int n,i; scanf("%d",&n); int a[n], prod[n], p=1;
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    for(i=0;i<n;i++){ prod[i]=p; p*=a[i]; }
    p=1; for(i=n-1;i>=0;i--){ prod[i]*=p; p*=a[i]; }
    printf("Product except self: ");
    for(i=0;i<n;i++) printf("%d ",prod[i]);
    printf("\n"); return 0;
}
