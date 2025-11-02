#include <stdio.h>
struct Employee { int id; float salary; };
int main() {
    struct Employee e[2];
    for(int i=0;i<2;i++){
        printf("Enter id and salary: ");
        scanf("%d %f",&e[i].id,&e[i].salary);
    }
    for(int i=0;i<2;i++)
        printf("%d %.2f\n", e[i].id, e[i].salary);
    return 0;
}
