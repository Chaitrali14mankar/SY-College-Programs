#include <stdio.h>
int main(){
    int n, val, i, j;
    printf("n: "); scanf("%d",&n);
    int a[100]; for(i=0;i<n;i++) scanf("%d",&a[i]);
    printf("Value to insert: "); scanf("%d",&val);
    for(i=n-1;i>=0 && a[i]>val;i--) a[i+1]=a[i];
    a[i+1]=val; n++;
    printf("After insert: ");
    for(i=0;i<n;i++) printf("%d ", a[i]);
    printf("\n");
    return 0;
}
