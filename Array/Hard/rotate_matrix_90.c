#include <stdio.h>
int main(){
    int n,i,j;
    printf("Matrix size n: "); scanf("%d",&n);
    int a[n][n], b[n][n];
    for(i=0;i<n;i++) for(j=0;j<n;j++) scanf("%d",&a[i][j]);
    for(i=0;i<n;i++) for(j=0;j<n;j++) b[j][n-1-i]=a[i][j];
    printf("Matrix rotated 90 degrees:\n");
    for(i=0;i<n;i++){ for(j=0;j<n;j++) printf("%d ",b[i][j]); printf("\n"); }
    return 0;
}
