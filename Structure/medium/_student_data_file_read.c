#include <stdio.h>
struct Student { int roll; char name[30]; float marks; };
int main() {
    FILE *fp = fopen("student.txt","r");
    struct Student s;
    while(fscanf(fp,"%d %s %f",&s.roll,s.name,&s.marks)!=EOF)
        printf("%d %s %.2f\n", s.roll, s.name, s.marks);
    fclose(fp);
    return 0;
}
