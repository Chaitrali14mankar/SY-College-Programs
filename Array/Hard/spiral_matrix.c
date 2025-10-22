#include <stdio.h>
int main(){
    int n; scanf("%d",&n); int a[n][n], i,j;
    for(i=0;i<n;i++) for(j=0;j<n;j++) scanf("%d",&a[i][j]);
    int top=0,bottom=n-1,left=0,right=n-1;
    printf("Spiral order: ");
    while(top<=bottom && left<=right){
        for(j=left;j<=right;j++) printf("%d ",a[top][j]); top++;
        for(i=top;i<=bottom;i++) printf("%d ",a[i][right]); right--;
        if(top<=bottom){ for(j=right;j>=left;j--) printf("%d ",a[bottom][j]); bottom--; }
        if(left<=right){ for(i=bottom;i>=top;i--) printf("%d ",a[i][left]); left++; }
    }
    printf("\n"); return 0;
}
