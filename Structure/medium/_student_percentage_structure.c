#include <stdio.h>
struct Student { int roll; char name[30]; float marks[5]; };
int main() {
    struct Student s;
    printf("Enter Roll & Name: ");
    scanf("%d %s", &s.roll, s.name);
    float total = 0;
    for(int i=0;i<5;i++){
        printf("Enter marks for subject %d: ", i+1);
        scanf("%f", &s.marks[i]);
        total += s.marks[i];
    }
    printf("Percentage = %.2f%%\n", total/5);
    return 0;
}
