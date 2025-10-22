#include <stdio.h>
int main(){
    int n,m,i,j; scanf("%d %d",&n,&m);
    int a[n][m];
    for(i=0;i<n;i++) for(j=0;j<m;j++) scanf("%d",&a[i][j]);
    printf("Snake print:\n");
    for(i=0;i<n;i++){
        if(i%2==0) for(j=0;j<m;j++) printf("%d ",a[i][j]);
        else for(j=m-1;j>=0;j--) printf("%d ",a[i][j]);
    }
    printf("\n"); return 0;
}
