#include <stdio.h>
int main(){
    int n, sum, i, j;
    printf("n: "); scanf("%d",&n);
    int a[n]; for(i=0;i<n;i++) scanf("%d",&a[i]);
    printf("Sum to find: "); scanf("%d",&sum);
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]+a[j]==sum) printf("Pair: (%d,%d)\n", a[i], a[j]);
        }
    }
    return 0;
}
