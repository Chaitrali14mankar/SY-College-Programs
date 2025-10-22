#include <stdio.h>
int diagonalSum(int n,int a[n][n]){
    int sum=0;
    for(int i=0;i<n;i++) sum+=a[i][i]+a[i][n-1-i];
    if(n%2==1) sum-=a[n/2][n/2]; // middle counted twice
    return sum;
}
int main(){
    int n; scanf("%d",&n);
    int a[n][n]; for(int i=0;i<n;i++) for(int j=0;j<n;j++) scanf("%d",&a[i][j]);
    printf("Diagonal sum = %d\n", diagonalSum(n,a));
    return 0;
}
