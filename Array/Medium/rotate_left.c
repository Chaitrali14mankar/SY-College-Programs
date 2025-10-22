#include <stdio.h>
int main(){
    int n, d, i;
    printf("n: "); scanf("%d",&n);
    int a[n]; for(i=0;i<n;i++) scanf("%d",&a[i]);
    printf("Rotate left by: "); scanf("%d",&d);
    int temp[d];
    for(i=0;i<d;i++) temp[i]=a[i];
    for(i=0;i<n-d;i++) a[i]=a[i+d];
    for(i=0;i<d;i++) a[n-d+i]=temp[i];
    printf("After left rotate: ");
    for(i=0;i<n;i++) printf("%d ", a[i]);
    printf("\n");
    return 0;
}
