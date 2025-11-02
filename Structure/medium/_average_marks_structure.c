#include <stdio.h>
struct Student { char name[20]; float marks[3]; };
int main() {
    struct Student s = {"Ravi", {75, 80, 85}};
    float avg = (s.marks[0] + s.marks[1] + s.marks[2]) / 3;
    printf("Average Marks of %s = %.2f\n", s.name, avg);
    return 0;
}
