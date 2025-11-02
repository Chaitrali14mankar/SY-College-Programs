#include <stdio.h>
struct Employee {
    int id;
    char name[30];
    float basic, hra, da, total;
};
int main() {
    struct Employee e;
    printf("Enter ID, Name, Basic Salary: ");
    scanf("%d %s %f", &e.id, e.name, &e.basic);
    e.hra = 0.1 * e.basic;
    e.da = 0.2 * e.basic;
    e.total = e.basic + e.hra + e.da;
    printf("Employee %s Total Salary = %.2f\n", e.name, e.total);
    return 0;
}
