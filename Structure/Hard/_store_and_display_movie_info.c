#include <stdio.h>
struct Movie { char title[30]; float rating; int year; };
int main() {
    struct Movie m[3];
    for(int i=0;i<3;i++){
        printf("Enter title, rating, year: ");
        scanf("%s %f %d", m[i].title, &m[i].rating, &m[i].year);
    }
    for(int i=0;i<3;i++)
        if(m[i].rating > 8.0)
            printf("Highly rated: %s (%.1f)\n", m[i].title, m[i].rating);
    return 0;
}
