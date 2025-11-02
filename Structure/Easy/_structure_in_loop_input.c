#include <stdio.h>
struct Product { int id; float price; };
int main() {
    struct Product p[3];
    for(int i=0;i<3;i++){
        printf("Enter id and price: ");
        scanf("%d %f",&p[i].id,&p[i].price);
    }
    for(int i=0;i<3;i++)
        printf("%d %.2f\n", p[i].id, p[i].price);
    return 0;
}
