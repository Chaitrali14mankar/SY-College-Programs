#include <stdio.h>
void reverse(int a[], int start, int end){
    if(start>=end) return;
    int t=a[start]; a[start]=a[end]; a[end]=t;
    reverse(a,start+1,end-1);
}
int main(){
    int n; scanf("%d",&n); int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    reverse(a,0,n-1);
    for(int i=0;i<n;i++) printf("%d ",a[i]);
    printf("\n"); return 0;
}
