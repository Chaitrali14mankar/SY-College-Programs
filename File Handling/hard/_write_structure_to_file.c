#include <stdio.h>
struct Student {
    int id;
    char name[30];
    float marks;
};
int main() {
    FILE *fp = fopen("student.dat", "wb");
    struct Student s = {1, "Amit", 85.5};
    fwrite(&s, sizeof(s), 1, fp);
    fclose(fp);
    printf("Record saved.\n");
    return 0;
}
