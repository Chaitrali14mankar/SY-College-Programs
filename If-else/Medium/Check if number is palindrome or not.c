#include <stdio.h>
int main() {
    int n,rev=0,temp,d;
    printf("Enter number: ");
    scanf("%d",&n);
    temp=n;
    while(temp>0) {
        d=temp%10;
        rev=rev*10+d;
        temp/=10;
    }
    if(n==rev)
        printf("Palindrome");
    else
        printf("Not Palindrome");
    return 0;
}
