#include <stdio.h>
#include <stdbool.h>
struct Employee { int id; char name[30]; float salary; };
int main() {
    FILE *fp = fopen("emp.dat", "rb");
    struct Employee e;
    int id; bool found = 0;
    printf("Enter ID to search: "); scanf("%d", &id);
    while (fread(&e, sizeof(e), 1, fp))
        if (e.id == id) { printf("Found: %s %.2f\n", e.name, e.salary); found = 1; break; }
    if (!found) printf("Record not found.\n");
    fclose(fp);
    return 0;
}
