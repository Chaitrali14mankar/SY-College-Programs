#include <stdio.h>
int main() {
    int n1, n2, i, j;
    printf("Size of first array: "); scanf("%d", &n1);
    int a[n1]; 
    for(i=0;i<n1;i++) scanf("%d",&a[i]);
    
    printf("Size of second array: "); scanf("%d", &n2);
    int b[n2];
    for(i=0;i<n2;i++) scanf("%d",&b[i]);
    
    int merged[n1+n2];
    for(i=0;i<n1;i++) merged[i]=a[i];
    for(j=0;j<n2;j++,i++) merged[i]=b[j];
    
    printf("Merged array: ");
    for(i=0;i<n1+n2;i++) printf("%d ", merged[i]);
    printf("\n");
    return 0;
}
