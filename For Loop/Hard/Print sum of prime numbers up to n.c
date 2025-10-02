#include <stdio.h>
int main() {
    int n,sum=0;
    printf("Enter n: ");
    scanf("%d",&n);
    for(int num=2;num<=n;num++) {
        int c=0;
        for(int i=1;i<=num;i++) if(num%i==0) c++;
        if(c==2) sum+=num;
    }
    printf("Sum = %d",sum);
    return 0;
}
