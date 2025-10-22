#include <stdio.h>
int maxMatrix(int r,int c,int a[r][c]){
    int mx=a[0][0];
    for(int i=0;i<r;i++) for(int j=0;j<c;j++) if(a[i][j]>mx) mx=a[i][j];
    return mx;
}
int main(){
    int r,c; scanf("%d %d",&r,&c);
    int a[r][c]; for(int i=0;i<r;i++) for(int j=0;j<c;j++) scanf("%d",&a[i][j]);
    printf("Maximum = %d\n", maxMatrix(r,c,a));
    return 0;
}
