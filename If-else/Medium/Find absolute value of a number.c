#include <stdio.h>
int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    if(n<0)
        n = -n;
    printf("Absolute Value = %d", n);
    return 0;
}
