#include <stdio.h>
int sumSubmatrix(int r1,int c1,int r2,int c2,int a[r2][c2]){
    int sum=0;
    for(int i=0;i<r2;i++)
        for(int j=0;j<c2;j++)
            sum += a[i][j];
    return sum;
}
int main(){
    int r,c; scanf("%d %d",&r,&c);
    int a[r][c]; for(int i=0;i<r;i++) for(int j=0;j<c;j++) scanf("%d",&a[i][j]);
    printf("Sum of submatrix = %d\n", sumSubmatrix(0,0,r,c,a));
    return 0;
}
