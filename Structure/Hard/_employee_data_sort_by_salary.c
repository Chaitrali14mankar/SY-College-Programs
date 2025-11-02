#include <stdio.h>
struct Employee { char name[20]; float salary; };
int main() {
    struct Employee e[3];
    for(int i=0;i<3;i++) scanf("%s %f", e[i].name, &e[i].salary);
    for(int i=0;i<3;i++)
        for(int j=i+1;j<3;j++)
            if(e[i].salary < e[j].salary){
                struct Employee t=e[i]; e[i]=e[j]; e[j]=t;
            }
    for(int i=0;i<3;i++) printf("%s %.2f\n", e[i].name, e[i].salary);
    return 0;
}
