#include <stdio.h>
int main() {
    char c;
    printf("Enter character: ");
    scanf(" %c", &c);
    if((c>='a'&&c<='z') || (c>='A'&&c<='Z'))
        printf("Alphabet");
    else
        printf("Not Alphabet");
    return 0;
}
