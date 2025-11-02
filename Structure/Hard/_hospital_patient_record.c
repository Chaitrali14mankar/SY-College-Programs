#include <stdio.h>
struct Patient { char name[30]; int age; char disease[30]; };
int main() {
    struct Patient p[3];
    for(int i=0;i<3;i++)
        scanf("%s %d %s", p[i].name, &p[i].age, p[i].disease);
    for(int i=0;i<3;i++)
        if(p[i].age>50)
            printf("%s has %s (Age %d)\n", p[i].name,p[i].disease,p[i].age);
    return 0;
}
