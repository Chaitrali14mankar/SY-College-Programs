#include <stdio.h>
int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    if(n % 7 == 0)
        printf("Divisible by 7");
    else
        printf("Not divisible by 7");
    return 0;
}
