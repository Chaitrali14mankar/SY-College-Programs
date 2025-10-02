#include <stdio.h>
int main() {
    int n=12345, count=0;
    for(; n>0; n/=10) count++;
    printf("Digits = %d", count);
    return 0;
}
