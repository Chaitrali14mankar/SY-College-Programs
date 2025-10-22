#include <stdio.h>
int main() {
    int n,rev=0,rem;
    printf("Enter number: ");
    scanf("%d",&n);
    int num=n;
    while(n!=0){
        rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    printf("Reverse=%d\n",rev);
    return 0;
}
