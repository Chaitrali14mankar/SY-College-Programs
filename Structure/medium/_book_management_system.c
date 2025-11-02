#include <stdio.h>
struct Book { char name[30]; int id; float price; };
int main() {
    struct Book b[2];
    for(int i=0;i<2;i++){
        printf("Enter ID, Name, Price: ");
        scanf("%d %s %f", &b[i].id, b[i].name, &b[i].price);
    }
    printf("\nBook Details:\n");
    for(int i=0;i<2;i++)
        printf("%d %s %.2f\n", b[i].id, b[i].name, b[i].price);
    return 0;
}
