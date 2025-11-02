#include <stdio.h>
struct Student { int roll; char name[30]; float marks; };
int main() {
    FILE *fp = fopen("student_data.txt","a");
    struct Student s;
    printf("Enter Roll, Name, Marks: ");
    scanf("%d %s %f",&s.roll,s.name,&s.marks);
    fprintf(fp,"%d %s %.2f\n",s.roll,s.name,s.marks);
    fclose(fp);
    printf("Record appended successfully.\n");
    return 0;
}
