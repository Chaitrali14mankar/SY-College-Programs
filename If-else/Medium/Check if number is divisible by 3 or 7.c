#include <stdio.h>
int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    if(n%3==0 || n%7==0)
        printf("Divisible by 3 or 7");
    else
        printf("Not Divisible");
    return 0;
}
