#include <stdio.h>
struct Student {
    int roll;
    char name[30];
};
int main() {
    struct Student s[3] = {{1,"A"}, {2,"B"}, {3,"C"}};
    for(int i=0;i<3;i++)
        printf("%d %s\n", s[i].roll, s[i].name);
    return 0;
}
