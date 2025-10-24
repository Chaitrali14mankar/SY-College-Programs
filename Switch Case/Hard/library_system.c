#include <stdio.h>
#include <string.h>
int main(){
    char book[5][50], name[50];
    int i, ch, count=0;
    while(1){
        printf("\n1.Add 2.View 3.Search 4.Exit\nChoice: ");
        scanf("%d",&ch); getchar();
        switch(ch){
            case 1: if(count<5){ printf("Book name: "); gets(book[count++]); }
                    else printf("Library full"); break;
            case 2: for(i=0;i<count;i++) printf("%d.%s\n",i+1,book[i]); break;
            case 3: printf("Enter name: "); gets(name);
                    for(i=0;i<count;i++)
                        if(strcmp(book[i],name)==0){ printf("Found!\n"); break; }
                    if(i==count) printf("Not Found\n"); break;
            case 4: return 0;
            default: printf("Invalid");
        }
    }
}
// library_system.c
