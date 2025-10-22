#include <stdio.h>
int main(){
    int n; printf("n: "); if(scanf("%d",&n)!=1) return 0;
    int a[100], i; for(i=0;i<n;i++) scanf("%d",&a[i]);
    int key; printf("delete value: "); scanf("%d",&key);
    int pos=-1;
    for(i=0;i<n;i++) if(a[i]==key){ pos=i; break; }
    if(pos==-1){ printf("Not found\n"); return 0; }
    for(i=pos;i<n-1;i++) a[i]=a[i+1];
    n--;
    printf("After delete: ");
    for(i=0;i<n;i++) printf("%d ", a[i]);
    printf("\n");
    return 0;
}
