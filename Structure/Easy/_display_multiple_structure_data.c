#include <stdio.h>
struct Book { char name[30]; int pages; };
int main() {
    struct Book b1 = {"Maths", 300}, b2 = {"Science", 250};
    printf("%s - %d pages\n%s - %d pages\n", b1.name,b1.pages,b2.name,b2.pages);
    return 0;
}
