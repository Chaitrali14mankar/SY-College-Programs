#include <stdio.h>
#include <stdlib.h>
struct Student { int roll; char name[20]; float marks; };
int main() {
    struct Student s[10];
    int n=0,ch;
    do{
        printf("1.Add 2.Display 3.Exit: ");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                printf("Enter Roll, Name, Marks: ");
                scanf("%d %s %f",&s[n].roll,s[n].name,&s[n].marks);
                n++;
                break;
            case 2:
                for(int i=0;i<n;i++)
                    printf("%d %s %.2f\n",s[i].roll,s[i].name,s[i].marks);
                break;
        }
    }while(ch!=3);
    return 0;
}
