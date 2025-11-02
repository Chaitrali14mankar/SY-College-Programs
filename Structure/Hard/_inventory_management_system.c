#include <stdio.h>
struct Product { int id; char name[20]; int qty; float price; };
int main() {
    struct Product p[3];
    float total=0;
    for(int i=0;i<3;i++){
        scanf("%d %s %d %f",&p[i].id,p[i].name,&p[i].qty,&p[i].price);
        total += p[i].qty * p[i].price;
    }
    printf("Total Inventory Value = %.2f\n", total);
    return 0;
}
