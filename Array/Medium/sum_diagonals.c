#include <stdio.h>
int main(){
    int n, i, j, sum1=0, sum2=0;
    printf("Matrix size n: "); scanf("%d",&n);
    int a[n][n]; for(i=0;i<n;i++) for(j=0;j<n;j++) scanf("%d",&a[i][j]);
    for(i=0;i<n;i++){ sum1+=a[i][i]; sum2+=a[i][n-1-i]; }
    printf("Primary diag sum=%d, Secondary diag sum=%d\n", sum1, sum2);
    return 0;
}
