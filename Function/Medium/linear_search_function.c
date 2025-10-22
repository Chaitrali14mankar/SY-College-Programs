#include <stdio.h>
int linearSearch(int a[], int n, int x){
    for(int i=0;i<n;i++) if(a[i]==x) return i;
    return -1;
}
int main(){
    int n,x; scanf("%d",&n); int a[n]; for(int i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&x);
    int idx=linearSearch(a,n,x);
    if(idx!=-1) printf("Found at index %d\n", idx);
    else printf("Not found\n");
    return 0;
}
