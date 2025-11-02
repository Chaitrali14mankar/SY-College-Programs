#include <stdio.h>
struct Employee { char name[20]; float salary; };
int main() {
    struct Employee e[3];
    for(int i=0;i<3;i++){
        printf("Enter name & salary: ");
        scanf("%s %f", e[i].name, &e[i].salary);
    }
    int maxIndex = 0;
    for(int i=1;i<3;i++)
        if(e[i].salary > e[maxIndex].salary)
            maxIndex = i;
    printf("Highest Salary: %s %.2f\n", e[maxIndex].name, e[maxIndex].salary);
    return 0;
}
