#include <stdio.h>
int main() {
    int n=25, bin[32], i=0;
    for(; n>0; n/=2) {
        bin[i++]=n%2;
    }
    printf("Binary: ");
    for(int j=i-1; j>=0; j--) printf("%d", bin[j]);
    return 0;
}
