#include <stdio.h>
int maxArray(int a[], int n){
    int mx=a[0];
    for(int i=1;i<n;i++) if(a[i]>mx) mx=a[i];
    return mx;
}
int main(){
    int n; scanf("%d",&n); int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    printf("Maximum = %d\n", maxArray(a,n));
    return 0;
}
