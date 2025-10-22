#include <stdio.h>
int main(){
    int n,m,i,j; scanf("%d %d",&n,&m);
    int a[n][m];
    for(i=0;i<n;i++) for(j=0;j<m;j++) scanf("%d",&a[i][j]);
    printf("Diagonal traversal:\n");
    for(int d=0; d<n+m-1; d++){
        if(d%2==0){
            for(i=0;i<=d;i++){
                j=d-i;
                if(i<n && j<m) printf("%d ",a[i][j]);
            }
        } else {
            for(i=d;i>=0;i--){
                j=d-i;
                if(i<n && j<m) printf("%d ",a[i][j]);
            }
        }
    }
    printf("\n"); return 0;
}
