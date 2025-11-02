#include <stdio.h>
struct Employee { int id; char name[30]; float salary; };
int main() {
    FILE *fp = fopen("emp.dat", "rb");
    FILE *temp = fopen("temp.dat", "wb");
    struct Employee e;
    int id;
    printf("Enter ID to delete: ");
    scanf("%d", &id);
    while (fread(&e, sizeof(e), 1, fp))
        if (e.id != id)
            fwrite(&e, sizeof(e), 1, temp);
    fclose(fp);
    fclose(temp);
    remove("emp.dat");
    rename("temp.dat", "emp.dat");
    printf("Record deleted.\n");
    return 0;
}
