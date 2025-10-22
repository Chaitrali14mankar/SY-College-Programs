#include <stdio.h>
int main(){
    int n; printf("n: "); if(scanf("%d",&n)!=1) return 0;
    int a[n], i;
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    for(i=0;i<n/2;i++){
        int t = a[i]; a[i]=a[n-1-i]; a[n-1-i]=t;
    }
    printf("Reversed in-place: ");
    for(i=0;i<n;i++) printf("%d ", a[i]);
    printf("\n");
    return 0;
}
