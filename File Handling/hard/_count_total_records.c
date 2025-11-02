#include <stdio.h>
struct Employee { int id; char name[30]; float salary; };
int main() {
    FILE *fp = fopen("emp.dat", "rb");
    fseek(fp, 0, SEEK_END);
    long size = ftell(fp);
    fclose(fp);
    printf("Total records: %ld\n", size / sizeof(struct Employee));
    return 0;
}
