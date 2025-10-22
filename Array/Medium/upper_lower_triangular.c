#include <stdio.h>
int main(){
    int n, i, j;
    printf("Matrix size n: "); scanf("%d",&n);
    int a[n][n], upper=1, lower=1;
    for(i=0;i<n;i++) for(j=0;j<n;j++) scanf("%d",&a[i][j]);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i>j && a[i][j]!=0) upper=0;
            if(i<j && a[i][j]!=0) lower=0;
        }
    }
    printf("%s upper triangular\n", upper?"Yes":"No");
    printf("%s lower triangular\n", lower?"Yes":"No");
    return 0;
}
