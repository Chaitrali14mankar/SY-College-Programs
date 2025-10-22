#include <stdio.h>
int diagonalDifference(int n,int a[n][n]){
    int primary=0, secondary=0;
    for(int i=0;i<n;i++){
        primary+=a[i][i];
        secondary+=a[i][n-1-i];
    }
    return primary-secondary>0?primary-secondary:secondary-primary;
}
int main(){
    int n; scanf("%d",&n);
    int a[n][n]; for(int i=0;i<n;i++) for(int j=0;j<n;j++) scanf("%d",&a[i][j]);
    printf("Diagonal difference = %d\n", diagonalDifference(n,a));
    return 0;
}
