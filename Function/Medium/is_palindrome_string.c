#include <stdio.h>
#include <string.h>
int isPalindrome(char s[]){
    int i=0, j=strlen(s)-1;
    while(i<j){ if(s[i]!=s[j]) return 0; i++; j--; }
    return 1;
}
int main(){
    char str[100]; scanf("%s",str);
    if(isPalindrome(str)) printf("Palindrome\n");
    else printf("Not Palindrome\n");
    return 0;
}
