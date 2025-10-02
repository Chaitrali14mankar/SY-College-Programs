#include <stdio.h>
int main() {
    int n=29, flag=1;
    for(int i=2; i<=n/2; i++) {
        if(n%i==0) {
            flag=0;
            break;
        }
    }
    if(flag) printf("%d is Prime", n);
    else printf("%d is Not Prime", n);
    return 0;
}
