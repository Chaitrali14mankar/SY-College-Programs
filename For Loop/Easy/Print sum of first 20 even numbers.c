#include <stdio.h>
int main() {
    int sum=0;
    for(int i=2; i<=40; i+=2) {
        sum += i;
    }
    printf("Sum = %d", sum);
    return 0;
}
