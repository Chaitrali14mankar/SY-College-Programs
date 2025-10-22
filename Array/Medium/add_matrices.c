#include <stdio.h>
int main(){
    int r, c, i, j;
    printf("Rows & Columns: "); scanf("%d %d",&r,&c);
    int a[r][c], b[r][c], sum[r][c];
    for(i=0;i<r;i++) for(j=0;j<c;j++) scanf("%d",&a[i][j]);
    for(i=0;i<r;i++) for(j=0;j<c;j++) scanf("%d",&b[i][j]);
    for(i=0;i<r;i++) for(j=0;j<c;j++) sum[i][j]=a[i][j]+b[i][j];
    printf("Sum matrix:\n");
    for(i=0;i<r;i++){ for(j=0;j<c;j++) printf("%d ", sum[i][j]); printf("\n"); }
    return 0;
}
