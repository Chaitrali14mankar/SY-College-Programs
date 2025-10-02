#include <stdio.h>
int main() {
    int base=2, exp=5, result=1;
    for(int i=1; i<=exp; i++) {
        result*=base;
    }
    printf("2^5 = %d", result);
    return 0;
}
