#include <stdio.h>

struct Student {
    int id;
    char name[20];
};

int main() {
    struct Student s1 = {101, "Amit"};
    struct Student *ptr = &s1;
    printf("ID: %d\n", ptr->id);
    printf("Name: %s\n", ptr->name);
    return 0;
}
