#include <stdio.h>
struct Address { char city[20]; int pin; };
struct Student { char name[20]; struct Address addr; };
int main() {
    struct Student s = {"Kiran", {"Pune", 411007}};
    printf("%s from %s (%d)\n", s.name, s.addr.city, s.addr.pin);
    return 0;
}
