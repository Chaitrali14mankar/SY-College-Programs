#include <stdio.h>
int main() {
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    int oct[32],i=0;
    for(;n>0;n/=8) oct[i++]=n%8;
    for(int j=i-1;j>=0;j--) printf("%d",oct[j]);
    return 0;
}
