#include <stdio.h>
struct Date { int d,m,y; };
struct Student { char name[30]; struct Date dob; };
int main() {
    struct Student s = {"Riya", {15, 8, 2002}};
    printf("Name: %s, DOB: %d/%d/%d\n", s.name, s.dob.d, s.dob.m, s.dob.y);
    return 0;
}
