#include <stdio.h>
struct Book { char title[30]; float price; };
int main() {
    struct Book b = {"C Programming", 450.0};
    struct Book *ptr = &b;
    printf("Title: %s, Price: %.2f\n", ptr->title, ptr->price);
    return 0;
}
