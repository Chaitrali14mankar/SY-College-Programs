#include <stdio.h>
#include <math.h>
int main() {
    int choice;
    float a,b,area;
    printf("1.Circle 2.Square 3.Rectangle 4.Triangle\nEnter choice: ");
    scanf("%d",&choice);
    switch(choice){
        case 1: printf("Radius: "); scanf("%f",&a); area=3.14*a*a; break;
        case 2: printf("Side: "); scanf("%f",&a); area=a*a; break;
        case 3: printf("Length & Breadth: "); scanf("%f%f",&a,&b); area=a*b; break;
        case 4: printf("Base & Height: "); scanf("%f%f",&a,&b); area=0.5*a*b; break;
        default: printf("Invalid");
    }
    printf("Area = %.2f", area);
}
