#include <stdio.h>
int countVowels(char s[]){
    int i, count=0;
    for(i=0;s[i];i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||
           s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U') count++;
    }
    return count;
}
int main(){
    char str[100]; scanf("%s",str);
    printf("Number of vowels = %d\n", countVowels(str));
    return 0;
}
