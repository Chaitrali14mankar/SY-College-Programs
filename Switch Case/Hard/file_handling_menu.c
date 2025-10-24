#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE *fp;
    int ch;
    char text[200];
    while(1){
        printf("\n1.Create/Write 2.Read 3.Delete 4.Exit\nChoice: ");
        scanf("%d",&ch); getchar();
        switch(ch){
            case 1: fp=fopen("data.txt","w");
                    printf("Enter text: "); gets(text);
                    fputs(text,fp); fclose(fp); break;
            case 2: fp=fopen("data.txt","r");
                    if(!fp){ printf("File not found\n"); break; }
                    while(fgets(text,200,fp)) printf("%s",text);
                    fclose(fp); break;
            case 3: remove("data.txt"); printf("File deleted\n"); break;
            case 4: return 0;
            default: printf("Invalid");
        }
    }
}
// file_handling_menu.c
