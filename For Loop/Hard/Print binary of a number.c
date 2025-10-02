#include <stdio.h>
int main() {
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    int bin[32],i=0;
    for(;n>0;n/=2) bin[i++]=n%2;
    for(int j=i-1;j>=0;j--) printf("%d",bin[j]);
    return 0;
}

