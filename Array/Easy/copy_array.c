#include <stdio.h>
int main(){
    int n; printf("n: "); if(scanf("%d",&n)!=1) return 0;
    int src[n], dest[n], i;
    for(i=0;i<n;i++){ printf("src[%d]: ",i); scanf("%d",&src[i]); dest[i]=src[i]; }
    printf("Copied array: ");
    for(i=0;i<n;i++) printf("%d ", dest[i]);
    printf("\n");
    return 0;
}
