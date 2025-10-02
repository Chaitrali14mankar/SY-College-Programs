#include <stdio.h>
int main() {
    for(int n=2; n<=50; n++) {
        int flag=1;
        for(int i=2; i<=n/2; i++) {
            if(n%i==0) {
                flag=0; break;
            }
        }
        if(flag) printf("%d ", n);
    }
    return 0;
}
