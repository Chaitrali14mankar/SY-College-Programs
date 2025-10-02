#include <stdio.h>
int main() {
    char c;
    printf("Enter character: ");
    scanf(" %c", &c);
    if(c>='A' && c<='Z')
        printf("Uppercase");
    else
        printf("Lowercase");
    return 0;
}
