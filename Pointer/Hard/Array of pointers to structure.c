#include <stdio.h>

struct Student {
    char name[20];
    int age;
};

int main() {
    struct Student s1 = {"Amit", 20}, s2 = {"Ravi", 22}, s3 = {"Neha", 19};
    struct Student *arr[] = {&s1, &s2, &s3};

    for (int i = 0; i < 3; i++)
        printf("%s - %d\n", arr[i]->name, arr[i]->age);

    return 0;
}
