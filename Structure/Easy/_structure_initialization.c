#include <stdio.h>
struct Car { char name[20]; int year; };
int main() {
    struct Car c = {"BMW", 2020};
    printf("Car: %s, Year: %d\n", c.name, c.year);
    return 0;
}
