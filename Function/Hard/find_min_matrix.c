#include <stdio.h>
int minMatrix(int r,int c,int a[r][c]){
    int mn=a[0][0];
    for(int i=0;i<r;i++) for(int j=0;j<c;j++) if(a[i][j]<mn) mn=a[i][j];
    return mn;
}
int main(){
    int r,c; scanf("%d %d",&r,&c);
    int a[r][c]; for(int i=0;i<r;i++) for(int j=0;j<c;j++) scanf("%d",&a[i][j]);
    printf("Minimum = %d\n", minMatrix(r,c,a));
    return 0;
}
