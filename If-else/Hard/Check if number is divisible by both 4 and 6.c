#include <stdio.h>
int main() {
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    if(n%4==0 && n%6==0)
        printf("Divisible by 4 and 6");
    else
        printf("Not divisible by both");
    return 0;
}
