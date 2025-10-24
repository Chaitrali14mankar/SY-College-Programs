#include <stdio.h>
int main() {
    int n, choice;
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    printf("1.Binary  2.Octal  3.Hexadecimal\nEnter choice: ");
    scanf("%d", &choice);
    switch(choice) {
        case 1: printf("Binary = %b (not directly supported in C)\nUse bitwise"); break;
        case 2: printf("Octal = %o", n); break;
        case 3: printf("Hexadecimal = %X", n); break;
        default: printf("Invalid choice");
    }
}
