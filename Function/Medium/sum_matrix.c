#include <stdio.h>
int sumMatrix(int r, int c, int a[r][c]){
    int sum = 0;
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            sum += a[i][j];
    return sum;
}
int main(){
    int r,c; scanf("%d %d",&r,&c);
    int a[r][c];
    for(int i=0;i<r;i++) for(int j=0;j<c;j++) scanf("%d",&a[i][j]);
    printf("Sum of matrix = %d\n", sumMatrix(r,c,a));
    return 0;
}
