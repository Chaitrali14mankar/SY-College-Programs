#include <stdio.h>
int main() {
    for(int n=1; n<=200; n++) {
        int temp=n, rev=0;
        while(temp>0) {
            rev=rev*10+temp%10;
            temp/=10;
        }
        if(rev==n) printf("%d ", n);
    }
    return 0;
}
