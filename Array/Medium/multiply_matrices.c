#include <stdio.h>
int main(){
    int r1, c1, r2, c2, i, j, k;
    printf("Rows & Cols of A & B: "); scanf("%d %d %d %d",&r1,&c1,&r2,&c2);
    if(c1!=r2){ printf("Cannot multiply\n"); return 0; }
    int a[r1][c1], b[r2][c2], res[r1][c2];
    for(i=0;i<r1;i++) for(j=0;j<c1;j++) scanf("%d",&a[i][j]);
    for(i=0;i<r2;i++) for(j=0;j<c2;j++) scanf("%d",&b[i][j]);
    for(i=0;i<r1;i++)
        for(j=0;j<c2;j++){
            res[i][j]=0;
            for(k=0;k<c1;k++) res[i][j]+=a[i][k]*b[k][j];
        }
    printf("Product matrix:\n");
    for(i=0;i<r1;i++){ for(j=0;j<c2;j++) printf("%d ", res[i][j]); printf("\n"); }
    return 0;
}
