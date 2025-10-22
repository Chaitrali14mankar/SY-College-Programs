#include <stdio.h>
int main(){
    int n; printf("n: "); if(scanf("%d",&n)!=1) return 0;
    int a[n], i;
    for(i=0;i<n;i++){ printf("a[%d]: ",i); scanf("%d",&a[i]); }
    printf("Reversed: ");
    for(i=n-1;i>=0;i--) printf("%d ", a[i]);
    printf("\n");
    return 0;
}
