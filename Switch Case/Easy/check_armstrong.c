#include <stdio.h>
int main() {
    int n,sum=0,temp,rem;
    printf("Enter number: ");
    scanf("%d",&n);
    temp=n;
    while(temp!=0){
        rem=temp%10;
        sum+=rem*rem*rem;
        temp/=10;
    }
    if(sum==n) printf("%d is Armstrong\n",n);
    else printf("%d is Not Armstrong\n",n);
    return 0;
}
