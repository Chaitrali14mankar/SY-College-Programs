#include <stdio.h>
void multiplyMatrix(int r1,int c1,int a[r1][c1],int r2,int c2,int b[r2][c2],int res[r1][c2]){
    for(int i=0;i<r1;i++)
        for(int j=0;j<c2;j++){
            res[i][j]=0;
            for(int k=0;k<c1;k++)
                res[i][j] += a[i][k]*b[k][j];
        }
}
int main(){
    int r1,c1,r2,c2; scanf("%d %d",&r1,&c1); scanf("%d %d",&r2,&c2);
    if(c1!=r2){ printf("Matrix multiplication not possible\n"); return 0; }
    int a[r1][c1], b[r2][c2], res[r1][c2];
    for(int i=0;i<r1;i++) for(int j=0;j<c1;j++) scanf("%d",&a[i][j]);
    for(int i=0;i<r2;i++) for(int j=0;j<c2;j++) scanf("%d",&b[i][j]);
    multiplyMatrix(r1,c1,a,r2,c2,b,res);
    printf("Result matrix:\n");
    for(int i=0;i<r1;i++){ for(int j=0;j<c2;j++) printf("%d ",res[i][j]); printf("\n"); }
    return 0;
}
