#include <stdio.h>
void printSpiral(int r,int c,int a[r][c]){
    int i, k=0, l=0;
    while(k<r && l<c){
        for(i=l;i<c;i++) printf("%d ",a[k][i]); k++;
        for(i=k;i<r;i++) printf("%d ",a[i][c-1]); c--;
        if(k<r){ for(i=c-1;i>=l;i--) printf("%d ",a[r-1][i]); r--; }
        if(l<c){ for(i=r-1;i>=k;i--) printf("%d ",a[i][l]); l++; }
    }
    printf("\n");
}
int main(){
    int r,c; scanf("%d %d",&r,&c);
    int a[r][c]; for(int i=0;i<r;i++) for(int j=0;j<c;j++) scanf("%d",&a[i][j]);
    printSpiral(r,c,a);
    return 0;
}
