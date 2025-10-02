#include <stdio.h>
int main() {
    int sum=0;
    for(int i=1; i<=39; i+=2) {
        sum += i;
    }
    printf("Sum = %d", sum);
    return 0;
}
