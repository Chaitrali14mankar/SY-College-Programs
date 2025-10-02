#include <stdio.h>
#include <string.h>
int main() {
    char str[]="Programming";
    int count=0;
    for(int i=0; i<strlen(str); i++) {
        char c=str[i];
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
           c=='A'||c=='E'||c=='I'||c=='O'||c=='U') count++;
    }
    printf("Vowels = %d", count);
    return 0;
}
