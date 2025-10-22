#include <stdio.h>
void addMatrix(int r,int c,int a[r][c],int b[r][c],int res[r][c]){
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            res[i][j]=a[i][j]+b[i][j];
}
int main(){
    int r,c; scanf("%d %d",&r,&c);
    int a[r][c],b[r][c],res[r][c];
    for(int i=0;i<r;i++) for(int j=0;j<c;j++) scanf("%d",&a[i][j]);
    for(int i=0;i<r;i++) for(int j=0;j<c;j++) scanf("%d",&b[i][j]);
    addMatrix(r,c,a,b,res);
    for(int i=0;i<r;i++){ for(int j=0;j<c;j++) printf("%d ",res[i][j]); printf("\n"); }
    return 0;
}
