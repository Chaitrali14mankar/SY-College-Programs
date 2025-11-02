#include <stdio.h>
#include <string.h>
struct Student { char name[30]; float marks; };
int main() {
    struct Student s[3];
    for(int i=0;i<3;i++)
        scanf("%s %f", s[i].name, &s[i].marks);
    for(int i=0;i<3;i++)
        for(int j=i+1;j<3;j++)
            if(s[i].marks < s[j].marks){
                struct Student t = s[i]; s[i]=s[j]; s[j]=t;
            }
    printf("Sorted by Marks:\n");
    for(int i=0;i<3;i++)
        printf("%s %.2f\n", s[i].name, s[i].marks);
    return 0;
}
