#include <stdio.h>
int main() {
    int n=4829, min=9;
    for(; n>0; n/=10) {
        int d=n%10;
        if(d<min) min=d;
    }
    printf("Smallest digit = %d", min);
    return 0;
}
