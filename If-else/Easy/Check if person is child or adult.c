#include <stdio.h>
int main() {
    int age;
    printf("Enter age: ");
    scanf("%d", &age);
    if(age < 18)
        printf("Child");
    else
        printf("Adult");
    return 0;
}
