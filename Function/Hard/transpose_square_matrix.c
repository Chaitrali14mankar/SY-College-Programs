#include <stdio.h>
void transpose(int n,int a[n][n]){
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++){
            int t=a[i][j]; a[i][j]=a[j][i]; a[j][i]=t;
        }
}
int main(){
    int n; scanf("%d",&n);
    int a[n][n]; for(int i=0;i<n;i++) for(int j=0;j<n;j++) scanf("%d",&a[i][j]);
    transpose(n,a);
    for(int i=0;i<n;i++){ for(int j=0;j<n;j++) printf("%d ",a[i][j]); printf("\n"); }
    return 0;
}
