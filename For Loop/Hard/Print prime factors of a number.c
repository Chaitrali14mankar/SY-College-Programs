#include <stdio.h>
int main() {
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    for(int i=2;n>1;i++) {
        while(n%i==0) {
            printf("%d ",i);
            n/=i;
        }
    }
    return 0;
}
