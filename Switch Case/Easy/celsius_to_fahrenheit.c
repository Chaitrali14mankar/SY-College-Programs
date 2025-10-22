#include <stdio.h>
int main() {
    double c;
    printf("Enter Celsius: ");
    scanf("%lf",&c);
    double f=(c*9/5)+32;
    printf("Fahrenheit=%.2lf\n",f);
    return 0;
}
