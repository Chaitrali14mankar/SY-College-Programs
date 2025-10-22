#include <stdio.h>
int main(){
    int r,c; scanf("%d %d",&r,&c);
    int a[r][c]; for(int i=0;i<r;i++) for(int j=0;j<c;j++) scanf("%d",&a[i][j]);
    int flag=0;
    for(int i=0;i<r;i++){
        int min=a[i][0], col=0;
        for(int j=1;j<c;j++){ if(a[i][j]<min){ min=a[i][j]; col=j; } }
        int k; for(k=0;k<r;k++) if(a[k][col]>min) break;
        if(k==r){ printf("Saddle Point = %d\n",min); flag=1; break; }
    }
    if(!flag) printf("No saddle point\n");
    return 0;
}
