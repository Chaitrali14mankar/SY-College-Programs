#include <stdio.h>
int main() {
    int n,temp,sum=0,f;
    printf("Enter number: ");
    scanf("%d",&n);
    temp=n;
    for(;temp>0;temp/=10) {
        int d=temp%10;
        f=1;
        for(int i=1;i<=d;i++) f*=i;
        sum+=f;
    }
    if(sum==n) printf("Strong Number");
    else printf("Not Strong Number");
    return 0;
}
