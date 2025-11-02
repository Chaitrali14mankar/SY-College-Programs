#include <stdio.h>
struct Student { int roll; char name[30]; float marks; };
int main() {
    FILE *fp = fopen("marks.dat", "wb");
    struct Student s;
    int n; float total = 0;
    printf("Enter number of students: "); scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Roll Name Marks: ");
        scanf("%d %s %f", &s.roll, s.name, &s.marks);
        total += s.marks;
        fwrite(&s, sizeof(s), 1, fp);
    }
    fclose(fp);
    printf("Average marks = %.2f\n", total / n);
    return 0;
}
