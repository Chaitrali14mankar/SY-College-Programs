#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if(a > b)
        printf("Greatest = %d", a);
    else
        printf("Greatest = %d", b);
    return 0;
}
