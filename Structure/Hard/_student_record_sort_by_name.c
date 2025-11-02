#include <stdio.h>
#include <string.h>
struct Student { char name[30]; int roll; };
int main() {
    struct Student s[3];
    for(int i=0;i<3;i++) scanf("%s %d", s[i].name, &s[i].roll);
    for(int i=0;i<3;i++)
        for(int j=i+1;j<3;j++)
            if(strcmp(s[i].name, s[j].name) > 0){
                struct Student t=s[i]; s[i]=s[j]; s[j]=t;
            }
    printf("Sorted by Name:\n");
    for(int i=0;i<3;i++) printf("%s %d\n", s[i].name, s[i].roll);
    return 0;
}
