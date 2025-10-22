#include <stdio.h>
int main(){
    int n, i, k=0;
    printf("n: "); scanf("%d",&n);
    int a[n], even[n];
    for(i=0;i<n;i++){ scanf("%d",&a[i]); if(a[i]%2==0) even[k++]=a[i]; }
    printf("Even elements: ");
    for(i=0;i<k;i++) printf("%d ", even[i]);
    printf("\n");
    return 0;
}
