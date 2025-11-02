#include <stdio.h>
#include <stdlib.h>
struct Employee { int id; char name[30]; float salary; };
int cmp(const void *a, const void *b) {
    float s1 = ((struct Employee*)a)->salary;
    float s2 = ((struct Employee*)b)->salary;
    return (s1 > s2) - (s1 < s2);
}
int main() {
    FILE *fp = fopen("emp.dat", "rb");
    struct Employee e[100];
    int n = fread(e, sizeof(struct Employee), 100, fp);
    fclose(fp);
    qsort(e, n, sizeof(struct Employee), cmp);
    for (int i = 0; i < n; i++)
        printf("%d %s %.2f\n", e[i].id, e[i].name, e[i].salary);
    return 0;
}
