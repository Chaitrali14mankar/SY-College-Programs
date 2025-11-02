#include <stdio.h>
struct Employee {
    int id;
    char name[30];
    float salary;
};
int main() {
    FILE *fp = fopen("emp.dat", "rb");
    struct Employee e;
    while (fread(&e, sizeof(e), 1, fp))
        printf("%d %s %.2f\n", e.id, e.name, e.salary);
    fclose(fp);
    return 0;
}
