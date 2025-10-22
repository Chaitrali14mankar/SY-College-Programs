#include <stdio.h>
int main(){
    int n, i, j, k=0;
    printf("n: "); scanf("%d",&n);
    int a[n], out[n];
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    for(i=0;i<n;i++){
        int found=0;
        for(j=0;j<k;j++) if(out[j]==a[i]){ found=1; break; }
        if(!found) out[k++]=a[i];
    }
    printf("Array after removing duplicates: ");
    for(i=0;i<k;i++) printf("%d ", out[i]);
    printf("\n");
    return 0;
}
