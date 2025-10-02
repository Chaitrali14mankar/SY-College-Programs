#include <stdio.h>
int main() {
    int fact=1;
    for(int i=1; i<=5; i++) {
        fact *= i;
    }
    printf("Factorial = %d", fact);
    return 0;
}
