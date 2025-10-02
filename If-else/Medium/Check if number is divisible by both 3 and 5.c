#include <stdio.h>
int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    if(n%3==0 && n%5==0)
        printf("Divisible by 3 and 5");
    else
        printf("Not Divisible by both");
    return 0;
}
