#include <stdio.h>
void rotate90(int n,int a[n][n],int res[n][n]){
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            res[j][n-1-i]=a[i][j];
}
int main(){
    int n; scanf("%d",&n);
    int a[n][n],res[n][n];
    for(int i=0;i<n;i++) for(int j=0;j<n;j++) scanf("%d",&a[i][j]);
    rotate90(n,a,res);
    for(int i=0;i<n;i++){ for(int j=0;j<n;j++) printf("%d ",res[i][j]); printf("\n"); }
    return 0;
}
