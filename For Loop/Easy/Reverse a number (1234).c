#include <stdio.h>
int main() {
    int n=1234, rev=0;
    for(; n>0; n/=10) {
        rev = rev*10 + n%10;
    }
    printf("Reverse = %d", rev);
    return 0;
}
