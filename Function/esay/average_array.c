#include <stdio.h>
float avgArray(int a[], int n){
    int sum=0;
    for(int i=0;i<n;i++) sum+=a[i];
    return (float)sum/n;
}
int main(){
    int n; scanf("%d",&n); int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    printf("Average = %.2f\n", avgArray(a,n));
    return 0;
}
