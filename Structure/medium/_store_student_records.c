#include <stdio.h>
struct Student {
    int roll;
    char name[30];
    float marks;
};
int main() {
    struct Student s[3];
    for(int i=0;i<3;i++){
        printf("Enter Roll, Name, Marks: ");
        scanf("%d %s %f", &s[i].roll, s[i].name, &s[i].marks);
    }
    printf("\nStudent Records:\n");
    for(int i=0;i<3;i++)
        printf("%d %s %.2f\n", s[i].roll, s[i].name, s[i].marks);
    return 0;
}
