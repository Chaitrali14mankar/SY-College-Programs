#include <stdio.h>
int main(){
    int n; printf("n (capacity max 100): "); if(scanf("%d",&n)!=1) return 0;
    int a[100], i;
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    int pos, val; printf("pos(0-based): "); scanf("%d",&pos);
    printf("val: "); scanf("%d",&val);
    if(pos<0 || pos>n){ printf("Invalid position\n"); return 0;}
    for(i=n;i>pos;i--) a[i]=a[i-1];
    a[pos]=val; n++;
    printf("After insert: ");
    for(i=0;i<n;i++) printf("%d ", a[i]);
    printf("\n");
    return 0;
}
