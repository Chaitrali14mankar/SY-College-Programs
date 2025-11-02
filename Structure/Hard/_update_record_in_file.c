#include <stdio.h>
#include <string.h>
struct Student { int roll; char name[30]; float marks; };
int main() {
    FILE *f1=fopen("student.txt","r"), *f2=fopen("temp.txt","w");
    struct Student s;
    int search;
    printf("Enter roll to update: ");
    scanf("%d",&search);
    while(fscanf(f1,"%d %s %f",&s.roll,s.name,&s.marks)!=EOF){
        if(s.roll==search){
            printf("Enter new name & marks: ");
            scanf("%s %f",s.name,&s.marks);
        }
        fprintf(f2,"%d %s %.2f\n",s.roll,s.name,s.marks);
    }
    fclose(f1); fclose(f2);
    remove("student.txt");
    rename("temp.txt","student.txt");
    printf("Record updated.\n");
    return 0;
}
