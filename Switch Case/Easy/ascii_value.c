#include <stdio.h>
int main() {
    char ch;
    printf("Enter character: ");
    scanf(" %c",&ch);
    printf("ASCII value of %c=%d\n",ch,(int)ch);
    return 0;
}
