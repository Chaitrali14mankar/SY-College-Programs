#include <stdio.h>
void reverseArray(int a[], int n){
    for(int i=0;i<n/2;i++){
        int t=a[i]; a[i]=a[n-1-i]; a[n-1-i]=t;
    }
}
int main(){
    int n; scanf("%d",&n); int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    reverseArray(a,n);
    printf("Reversed array: ");
    for(int i=0;i<n;i++) printf("%d ",a[i]);
    printf("\n"); return 0;
}
