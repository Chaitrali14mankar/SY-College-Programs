#include <stdio.h>
struct Employee { int id; char name[30]; float salary; };
int main() {
    FILE *fp = fopen("emp.dat", "ab");
    struct Employee e;
    printf("Enter ID Name Salary: ");
    scanf("%d %s %f", &e.id, e.name, &e.salary);
    fwrite(&e, sizeof(e), 1, fp);
    fclose(fp);
    printf("Record appended.\n");
    return 0;
}
