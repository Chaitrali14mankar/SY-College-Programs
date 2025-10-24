#include <stdio.h>
int main() {
    int choice;
    float t, res;
    printf("1.C->F  2.F->C  3.C->K\nEnter choice: ");
    scanf("%d",&choice);
    printf("Enter temperature: ");
    scanf("%f",&t);
    switch(choice){
        case 1: res=(t*9/5)+32; printf("F=%.2f",res); break;
        case 2: res=(t-32)*5/9; printf("C=%.2f",res); break;
        case 3: res=t+273.15; printf("K=%.2f",res); break;
        default: printf("Invalid");
    }
}

