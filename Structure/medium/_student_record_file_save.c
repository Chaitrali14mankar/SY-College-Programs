#include <stdio.h>
struct Student { int roll; char name[30]; float marks; };
int main() {
    FILE *fp = fopen("student.txt","w");
    struct Student s;
    printf("Enter Roll, Name, Marks: ");
    scanf("%d %s %f",&s.roll,s.name,&s.marks);
    fprintf(fp,"%d %s %.2f\n",s.roll,s.name,s.marks);
    fclose(fp);
    printf("Data saved to student.txt\n");
    return 0;
}
