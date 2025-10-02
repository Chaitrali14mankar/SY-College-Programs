#include <stdio.h>
int main() {
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    if(n==0)
        printf("Zero");
    else if(n%2==0)
        printf("Even");
    else
        printf("Odd");
    return 0;
}
