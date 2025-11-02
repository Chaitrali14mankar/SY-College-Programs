#include <stdio.h>
#include <string.h>
struct Person { char name[30]; int age; };
int main() {
    struct Person p1 = {"Amit", 20}, p2 = {"Amit", 20};
    if(strcmp(p1.name,p2.name)==0 && p1.age==p2.age)
        printf("Structures are equal\n");
    else
        printf("Not equal\n");
    return 0;
}
