#include <stdio.h>
struct Student { char name[20]; float marks[3]; char grade; };
char findGrade(float avg){
    if(avg>=90) return 'A';
    else if(avg>=75) return 'B';
    else if(avg>=50) return 'C';
    else return 'F';
}
int main() {
    struct Student s;
    printf("Enter Name & 3 Marks: ");
    scanf("%s %f %f %f", s.name,&s.marks[0],&s.marks[1],&s.marks[2]);
    float avg=(s.marks[0]+s.marks[1]+s.marks[2])/3;
    s.grade=findGrade(avg);
    printf("%s -> Avg: %.2f Grade: %c\n", s.name, avg, s.grade);
    return 0;
}
