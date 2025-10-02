#include <stdio.h>
int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    if(n>=-9 && n<=9)
        printf("Single Digit");
    else
        printf("Not Single Digit");
    return 0;
}
