#include <stdio.h>
#include <string.h>
void reverse(char s[], int start, int end){
    if(start>=end) return;
    char t=s[start]; s[start]=s[end]; s[end]=t;
    reverse(s,start+1,end-1);
}
int main(){
    char str[100]; scanf("%s",str);
    reverse(str,0,strlen(str)-1);
    printf("Reversed: %s\n",str);
    return 0;
}
