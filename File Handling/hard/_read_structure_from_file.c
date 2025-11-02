#include <stdio.h>
struct Student {
    int id;
    char name[30];
    float marks;
};
int main() {
    FILE *fp = fopen("student.dat", "rb");
    struct Student s;
    fread(&s, sizeof(s), 1, fp);
    printf("ID: %d Name: %s Marks: %.2f\n", s.id, s.name, s.marks);
    fclose(fp);
    return 0;
}
