#include <stdio.h>
int minArray(int a[], int n){
    int mn=a[0];
    for(int i=1;i<n;i++) if(a[i]<mn) mn=a[i];
    return mn;
}
int main(){
    int n; scanf("%d",&n); int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    printf("Minimum = %d\n", minArray(a,n));
    return 0;
}
