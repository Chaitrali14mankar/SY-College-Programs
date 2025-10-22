#include <stdio.h>
void sumTriangle(int n,int a[n][n],int *upper,int *lower){
    *upper=0; *lower=0;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++){
            if(j>=i) *upper+=a[i][j];
            if(j<=i) *lower+=a[i][j];
        }
}
int main(){
    int n; scanf("%d",&n);
    int a[n][n]; for(int i=0;i<n;i++) for(int j=0;j<n;j++) scanf("%d",&a[i][j]);
    int u,l; sumTriangle(n,a,&u,&l);
    printf("Upper=%d, Lower=%d\n",u,l);
    return 0;
}
