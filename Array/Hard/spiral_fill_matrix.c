#include <stdio.h>
int main(){
    int n,i,j,top=0,bottom, left=0,right, num=1;
    scanf("%d",&n);
    bottom=right=n-1;
    int a[n][n];
    while(top<=bottom && left<=right){
        for(i=left;i<=right;i++) a[top][i]=num++;
        top++;
        for(i=top;i<=bottom;i++) a[i][right]=num++;
        right--;
        if(top<=bottom) for(i=right;i>=left;i--) a[bottom][i]=num++;
        if(left<=right) for(i=bottom;i>=top;i--) a[i][left]=num++;
        bottom--; left++;
    }
    for(i=0;i<n;i++){ for(j=0;j<n;j++) printf("%d ",a[i][j]); printf("\n"); }
    return 0;
}
