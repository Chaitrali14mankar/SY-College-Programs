#include <stdio.h>
#include <string.h>
struct Employee { int id; char name[30]; float salary; };
int main() {
    FILE *fp = fopen("emp.dat", "r+b");
    struct Employee e;
    int id; printf("Enter ID to update: "); scanf("%d", &id);
    while (fread(&e, sizeof(e), 1, fp)) {
        if (e.id == id) {
            printf("Enter new salary: ");
            scanf("%f", &e.salary);
            fseek(fp, -sizeof(e), SEEK_CUR);
            fwrite(&e, sizeof(e), 1, fp);
            printf("Record updated.\n");
            break;
        }
    }
    fclose(fp);
    return 0;
}
