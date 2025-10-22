#include <stdio.h>
int main(){
    int n; printf("n: "); if(scanf("%d",&n)!=1) return 0;
    int i, x, sum=0;
    for(i=0;i<n;i++){ scanf("%d",&x); if(x%2==0) sum+=x; }
    printf("Sum of even elements = %d\n", sum);
    return 0;
}
