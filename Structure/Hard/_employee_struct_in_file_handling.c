#include <stdio.h>
struct Employee { int id; char name[20]; float salary; };
int main() {
    FILE *fp=fopen("employee.txt","w");
    struct Employee e[2];
    for(int i=0;i<2;i++){
        printf("Enter ID, Name, Salary: ");
        scanf("%d %s %f",&e[i].id,e[i].name,&e[i].salary);
        fprintf(fp,"%d %s %.2f\n",e[i].id,e[i].name,e[i].salary);
    }
    fclose(fp);
    printf("Data saved to employee.txt\n");
    return 0;
}
