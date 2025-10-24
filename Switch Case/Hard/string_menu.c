#include <stdio.h>
#include <string.h>
int main() {
    char s1[100], s2[100];
    int choice;
    printf("Enter first string: ");
    gets(s1);
    printf("1.Length 2.Copy 3.Compare 4.Concat\nEnter choice: ");
    scanf("%d",&choice); getchar();
    switch(choice){
        case 1: printf("Length=%d", (int)strlen(s1)); break;
        case 2: strcpy(s2,s1); printf("Copied: %s",s2); break;
        case 3: printf("Enter second string: "); gets(s2);
                if(strcmp(s1,s2)==0) printf("Equal"); else printf("Not Equal"); break;
        case 4: printf("Enter second string: "); gets(s2);
                strcat(s1,s2); printf("Concatenated: %s",s1); break;
        default: printf("Invalid");
    }
}
