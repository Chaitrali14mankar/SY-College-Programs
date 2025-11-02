#include <stdio.h>
struct Employee {
    int id;
    char name[30];
    float salary;
};
int main() {
    FILE *fp = fopen("emp.dat", "wb");
    struct Employee e;
    int n;
    printf("Enter number of employees: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("ID Name Salary: ");
        scanf("%d %s %f", &e.id, e.name, &e.salary);
        fwrite(&e, sizeof(e), 1, fp);
    }
    fclose(fp);
    printf("Records saved.\n");
    return 0;
}
