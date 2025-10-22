#include <stdio.h>
int isPalindrome(int n){
    int rev=0, temp=n;
    while(temp>0){ rev=rev*10+temp%10; temp/=10; }
    return rev==n;
}
int main(){
    int n; scanf("%d",&n);
    if(isPalindrome(n)) printf("%d is palindrome\n", n);
    else printf("%d is not palindrome\n", n);
    return 0;
}
