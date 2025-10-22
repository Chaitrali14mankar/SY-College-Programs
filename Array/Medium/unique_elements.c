#include <stdio.h>
int main(){
    int n; printf("n: "); scanf("%d",&n);
    int a[n], i, j, k=0, out[n];
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    for(i=0;i<n;i++){
        int found=0;
        for(j=0;j<k;j++) if(out[j]==a[i]){ found=1; break; }
        if(!found) out[k++]=a[i];
    }
    printf("Unique elements: ");
    for(i=0;i<k;i++) printf("%d ", out[i]);
    printf("\n");
    return 0;
}
