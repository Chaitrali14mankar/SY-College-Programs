#include <stdio.h>
struct Employee { char name[20]; float salary, bonus; };
int main() {
    struct Employee e[3];
    for(int i=0;i<3;i++){
        printf("Enter name & salary: ");
        scanf("%s %f", e[i].name, &e[i].salary);
        e[i].bonus = e[i].salary * 0.1;
    }
    int max = 0;
    for(int i=1;i<3;i++)
        if(e[i].bonus > e[max].bonus)
            max = i;
    printf("Highest Bonus: %s %.2f\n", e[max].name, e[max].bonus);
    return 0;
}
