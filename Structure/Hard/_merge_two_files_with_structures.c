#include <stdio.h>
struct Student { int id; char name[20]; float marks; };
int main() {
    FILE *f1=fopen("file1.txt","r"), *f2=fopen("file2.txt","r"), *f3=fopen("merged.txt","w");
    struct Student s;
    while(fscanf(f1,"%d %s %f",&s.id,s.name,&s.marks)!=EOF)
        fprintf(f3,"%d %s %.2f\n",s.id,s.name,s.marks);
    while(fscanf(f2,"%d %s %f",&s.id,s.name,&s.marks)!=EOF)
        fprintf(f3,"%d %s %.2f\n",s.id,s.name,s.marks);
    fclose(f1); fclose(f2); fclose(f3);
    printf("Files merged successfully.\n");
    return 0;
}
