#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if(a < b)
        printf("Smallest = %d", a);
    else
        printf("Smallest = %d", b);
    return 0;
}
