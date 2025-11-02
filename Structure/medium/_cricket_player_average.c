#include <stdio.h>
struct Player { char name[30]; int matches; float avg; };
int main() {
    struct Player p[3];
    for(int i=0;i<3;i++){
        printf("Enter name, matches, average: ");
        scanf("%s %d %f", p[i].name, &p[i].matches, &p[i].avg);
    }
    printf("\nPlayers with average > 40:\n");
    for(int i=0;i<3;i++)
        if(p[i].avg > 40)
            printf("%s %.2f\n", p[i].name, p[i].avg);
    return 0;
}
