#include <stdio.h>
int main() {
    int n=1234, sum=0;
    for(; n>0; n/=10) {
        sum += n%10;
    }
    printf("Sum of digits = %d", sum);
    return 0;
}
