#include <stdio.h>
int main(){
    int n; printf("n: "); if(scanf("%d",&n)!=1) return 0;
    int a[100], i, j;
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
        for(j=0;j<n-1-i;j++)
            if(a[j]>a[j+1]){ int t=a[j]; a[j]=a[j+1]; a[j+1]=t; }
    printf("Sorted ascending: ");
    for(i=0;i<n;i++) printf("%d ", a[i]);
    printf("\n");
    return 0;
}
