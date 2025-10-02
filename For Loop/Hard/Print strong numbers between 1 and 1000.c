#include <stdio.h>
int main() {
    for(int n=1;n<=1000;n++) {
        int temp=n,sum=0,f;
        for(;temp>0;temp/=10) {
            int d=temp%10;
            f=1;
            for(int i=1;i<=d;i++) f*=i;
            sum+=f;
        }
        if(sum==n) printf("%d ",n);
    }
    return 0;
}
