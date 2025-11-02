#include <stdio.h>
struct Student { int roll; char name[20]; float marks; };
int main() {
    FILE *fp=fopen("result.txt","w");
    struct Student s;
    for(int i=0;i<3;i++){
        printf("Enter Roll, Name, Marks: ");
        scanf("%d %s %f",&s.roll,s.name,&s.marks);
        fprintf(fp,"%d %s %.2f\n",s.roll,s.name,s.marks);
    }
    fclose(fp);
    printf("Results stored.\n");
    return 0;
}
