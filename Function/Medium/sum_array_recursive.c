#include <stdio.h>
int sumArray(int a[], int n){
    if(n==0) return 0;
    return a[n-1] + sumArray(a, n-1);
}
int main(){
    int n,i; scanf("%d",&n); int a[n];
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    printf("Sum = %d\n", sumArray(a,n));
    return 0;
}
