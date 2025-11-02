#include <stdio.h>
#include <stdlib.h>
struct Employee { int id; char name[20]; float salary; };
int main() {
    struct Employee *e;
    int n; printf("Enter number of employees: ");
    scanf("%d",&n);
    e = (struct Employee*) malloc(n * sizeof(struct Employee));
    for(int i=0;i<n;i++)
        scanf("%d %s %f",&e[i].id,e[i].name,&e[i].salary);
    for(int i=0;i<n;i++)
        printf("%d %s %.2f\n",e[i].id,e[i].name,e[i].salary);
    free(e);
    return 0;
}
