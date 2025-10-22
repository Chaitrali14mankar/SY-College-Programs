#include <stdio.h>
int main(){
    int n,m,i,j; scanf("%d %d",&n,&m);
    int a[n][m];
    for(i=0;i<n;i++) for(j=0;j<m;j++) scanf("%d",&a[i][j]);
    printf("Boundary elements:\n");
    for(j=0;j<m;j++) printf("%d ",a[0][j]);
    for(i=1;i<n;i++) printf("%d ",a[i][m-1]);
    for(j=m-2;j>=0;j--) printf("%d ",a[n-1][j]);
    for(i=n-2;i>0;i--) printf("%d ",a[i][0]);
    printf("\n"); return 0;
}
