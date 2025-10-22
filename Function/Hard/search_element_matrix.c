#include <stdio.h>
int searchMatrix(int r,int c,int a[r][c],int x){
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            if(a[i][j]==x) return 1;
    return 0;
}
int main(){
    int r,c,x; scanf("%d %d",&r,&c);
    int a[r][c]; for(int i=0;i<r;i++) for(int j=0;j<c;j++) scanf("%d",&a[i][j]);
    scanf("%d",&x);
    if(searchMatrix(r,c,a,x)) printf("Found\n"); else printf("Not Found\n");
    return 0;
}
