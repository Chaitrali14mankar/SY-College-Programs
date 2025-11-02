#include <stdio.h>
struct Student { char name[20]; int marks[3]; };
int main() {
    struct Student s = {"Asha", {70, 80, 90}};
    int total=0;
    for(int i=0;i<3;i++) total += s.marks[i];
    printf("Total = %d, Average = %.2f\n", total, total/3.0);
    return 0;
}
