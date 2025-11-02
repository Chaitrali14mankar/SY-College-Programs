#include <stdio.h>
struct Date { int day, month, year; };
int main() {
    struct Date d;
    printf("Enter DD MM YYYY: ");
    scanf("%d %d %d", &d.day, &d.month, &d.year);
    printf("Date: %02d-%02d-%d\n", d.day, d.month, d.year);
    return 0;
}
