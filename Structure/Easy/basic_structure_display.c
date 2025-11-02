#include <stdio.h>
struct Student {
    int roll;
    char name[30];
    float marks;
};
int main() {
    struct Student s = {1, "Amit", 88.5};
    printf("Roll: %d\nName: %s\nMarks: %.2f\n", s.roll, s.name, s.marks);
    return 0;
}
