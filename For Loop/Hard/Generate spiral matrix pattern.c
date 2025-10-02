#include <stdio.h>
int main() {
    int n=4;
    int a[4][4];
    int val=1, top=0, bottom=n-1, left=0, right=n-1;
    while(top<=bottom && left<=right) {
        for(int i=left;i<=right;i++) a[top][i]=val++;
        top++;
        for(int i=top;i<=bottom;i++) a[i][right]=val++;
        right--;
        for(int i=right;i>=left;i--) a[bottom][i]=val++;
        bottom--;
        for(int i=bottom;i>=top;i--) a[i][left]=val++;
        left++;
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) printf("%3d",a[i][j]);
        printf("\n");
    }
    return 0;
}
