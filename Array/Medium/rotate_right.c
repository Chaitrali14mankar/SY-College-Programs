#include <stdio.h>
int main(){
    int n, d, i;
    printf("n: "); scanf("%d",&n);
    int a[n]; for(i=0;i<n;i++) scanf("%d",&a[i]);
    printf("Rotate right by: "); scanf("%d",&d);
    int temp[d];
    for(i=0;i<d;i++) temp[i]=a[n-d+i];
    for(i=n-1;i>=d;i--) a[i]=a[i-d];
    for(i=0;i<d;i++) a[i]=temp[i];
    printf("After right rotate: ");
    for(i=0;i<n;i++) printf("%d ", a[i]);
    printf("\n");
    return 0;
}
