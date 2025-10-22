#include <stdio.h>
void transpose(int r,int c,int a[r][c],int t[c][r]){
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++) t[j][i]=a[i][j];
}
int main(){
    int r,c; scanf("%d %d",&r,&c);
    int a[r][c],t[c][r];
    for(int i=0;i<r;i++) for(int j=0;j<c;j++) scanf("%d",&a[i][j]);
    transpose(r,c,a,t);
    for(int i=0;i<c;i++){ for(int j=0;j<r;j++) printf("%d ",t[i][j]); printf("\n"); }
    return 0;
}
