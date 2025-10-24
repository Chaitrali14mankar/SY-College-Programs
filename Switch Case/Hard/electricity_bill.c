#include <stdio.h>
int main() {
    int units; float bill;
    printf("Enter total units: ");
    scanf("%d", &units);
    switch(units/100) {
        case 0: bill=units*1.5; break;
        case 1: bill=100*1.5+(units-100)*2; break;
        case 2: case 3: bill=100*1.5+100*2+(units-200)*3; break;
        default: bill=100*1.5+100*2+200*3+(units-400)*5;
    }
    printf("Electricity Bill: ₹%.2f", bill);
}

