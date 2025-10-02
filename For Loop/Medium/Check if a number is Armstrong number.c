#include <stdio.h>
#include <math.h>
int main() {
    int n=153, temp=n, sum=0, digits=0;
    for(int t=n; t>0; t/=10) digits++;
    while(temp>0) {
        int d=temp%10;
        sum+=pow(d,digits);
        temp/=10;
    }
    if(sum==n) printf("%d is Armstrong", n);
    else printf("%d is Not Armstrong", n);
    return 0;
}
