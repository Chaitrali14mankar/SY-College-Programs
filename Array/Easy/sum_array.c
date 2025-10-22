#include <stdio.h>
int main() {
    int n; printf("n: "); if(scanf("%d",&n)!=1) return 0;
    int a[n], i, sum=0;
    for(i=0;i<n;i++){ printf("a[%d]: ",i); scanf("%d",&a[i]); sum+=a[i]; }
    printf("Sum = %d\n", sum);
    return 0;
}
