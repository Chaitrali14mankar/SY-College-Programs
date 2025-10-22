#include <stdio.h>
void findMaxMin(int a[], int n, int *max, int *min){
    *max=a[0]; *min=a[0];
    for(int i=1;i<n;i++){
        if(a[i]>*max) *max=a[i];
        if(a[i]<*min) *min=a[i];
    }
}
int main(){
    int n; scanf("%d",&n); int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    int mx,mn; findMaxMin(a,n,&mx,&mn);
    printf("Max=%d, Min=%d\n", mx,mn);
    return 0;
}
