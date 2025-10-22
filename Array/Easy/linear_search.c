#include <stdio.h>
int main(){
    int n; printf("n: "); if(scanf("%d",&n)!=1) return 0;
    int a[n], i, key; for(i=0;i<n;i++) scanf("%d",&a[i]);
    printf("key: "); scanf("%d",&key);
    for(i=0;i<n;i++) if(a[i]==key){ printf("Found at index %d\n", i); return 0; }
    printf("Not found\n");
    return 0;
}
