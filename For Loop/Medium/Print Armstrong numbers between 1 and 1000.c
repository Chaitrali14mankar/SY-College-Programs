#include <stdio.h>
#include <math.h>
int main() {
    for(int n=1; n<=1000; n++) {
        int temp=n, sum=0, digits=0;
        for(int t=n; t>0; t/=10) digits++;
        temp=n;
        while(temp>0) {
            int d=temp%10;
            sum+=pow(d,digits);
            temp/=10;
        }
        if(sum==n) printf("%d ", n);
    }
    return 0;
}
