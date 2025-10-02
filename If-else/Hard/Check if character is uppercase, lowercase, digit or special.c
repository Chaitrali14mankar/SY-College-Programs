#include <stdio.h>
int main() {
    char c;
    printf("Enter character: ");
    scanf(" %c",&c);
    if(c>='A' && c<='Z')
        printf("Uppercase");
    else if(c>='a' && c<='z')
        printf("Lowercase");
    else if(c>='0' && c<='9')
        printf("Digit");
    else
        printf("Special Character");
    return 0;
}
