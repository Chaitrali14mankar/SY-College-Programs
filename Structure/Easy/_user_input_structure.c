#include <stdio.h>
struct Student {
    int roll;
    char name[30];
    float marks;
};
int main() {
    struct Student s;
    printf("Enter Roll, Name, Marks: ");
    scanf("%d %s %f", &s.roll, s.name, &s.marks);
    printf("Student: %d %s %.2f\n", s.roll, s.name, s.marks);
    return 0;
}
