#include <stdio.h>
int main() {
    int n=4829, max=0;
    for(; n>0; n/=10) {
        int d=n%10;
        if(d>max) max=d;
    }
    printf("Largest digit = %d", max);
    return 0;
}
