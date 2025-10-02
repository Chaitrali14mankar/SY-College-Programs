#include <stdio.h>
int main() {
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    if(n%2==0)
        printf("Divisible by 2");
    else if(n%3==0)
        printf("Divisible by 3");
    else if(n%5==0)
        printf("Divisible by 5");
    else
        printf("Not divisible by 2,3,5");
    return 0;
}
