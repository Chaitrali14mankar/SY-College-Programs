#include <stdio.h>
#include <math.h>
int main() {
    int n,temp,sum=0,d,count=0;
    printf("Enter number: ");
    scanf("%d",&n);
    temp=n;
    for(int t=n;t>0;t/=10) count++;
    while(temp>0) {
        d=temp%10;
        sum+=pow(d,count);
        temp/=10;
    }
    if(sum==n)
        printf("Armstrong");
    else
        printf("Not Armstrong");
    return 0;
}
