#include <stdio.h>
struct Book { int id; char name[30]; char author[30]; float price; };
int main() {
    struct Book b[3];
    for(int i=0;i<3;i++){
        printf("Enter ID, Name, Author, Price: ");
        scanf("%d %s %s %f", &b[i].id, b[i].name, b[i].author, &b[i].price);
    }
    printf("\nBooks with price > 300:\n");
    for(int i=0;i<3;i++)
        if(b[i].price > 300)
            printf("%s by %s - %.2f\n", b[i].name, b[i].author, b[i].price);
    return 0;
}
