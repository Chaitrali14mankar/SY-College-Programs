#include <stdio.h>
int main(){
    int n,m,i,j; scanf("%d %d",&n,&m);
    int a[n][m];
    for(i=0;i<n;i++) for(j=0;j<m;j++) scanf("%d",&a[i][j]);
    printf("Wave print:\n");
    for(j=0;j<m;j++){
        if(j%2==0) for(i=0;i<n;i++) printf("%d ",a[i][j]);
        else for(i=n-1;i>=0;i--) printf("%d ",a[i][j]);
    }
    printf("\n"); return 0;
}
