#include <stdio.h>
#include <math.h>
int main() {
    int a=2, r=2;
    for(int i=0; i<15; i++) {
        printf("%d ", a*(int)pow(r,i));
    }
    return 0;
}
