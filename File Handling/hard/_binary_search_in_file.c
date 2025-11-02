#include <stdio.h>
struct Record { int id; char name[30]; };
int main() {
    FILE *fp = fopen("rec.dat", "rb");
    struct Record r;
    int id, found = 0;
    printf("Enter ID to search: "); scanf("%d", &id);
    while (fread(&r, sizeof(r), 1, fp))
        if (r.id == id) { printf("Found: %s\n", r.name); found = 1; break; }
    if (!found) printf("Record not found.\n");
    fclose(fp);
    return 0;
}
