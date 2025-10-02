#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if(a>=b && a>=c)
        printf("Greatest = %d", a);
    else if(b>=a && b>=c)
        printf("Greatest = %d", b);
    else
        printf("Greatest = %d", c);
    return 0;
}
