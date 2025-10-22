#include <stdio.h>
int sumArray(int a[], int n){
    int sum=0;
    for(int i=0;i<n;i++) sum+=a[i];
    return sum;
}
int main(){
    int n; scanf("%d",&n); int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    printf("Sum of array = %d\n", sumArray(a,n));
    return 0;
}
