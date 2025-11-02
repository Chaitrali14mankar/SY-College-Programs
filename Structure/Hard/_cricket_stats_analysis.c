#include <stdio.h>
struct Player { char name[30]; int runs, matches; float avg; };
int main() {
    struct Player p[3];
    for(int i=0;i<3;i++){
        printf("Enter name, runs, matches: ");
        scanf("%s %d %d",p[i].name,&p[i].runs,&p[i].matches);
        p[i].avg = (float)p[i].runs/p[i].matches;
    }
    for(int i=0;i<3;i++)
        printf("%s -> Avg: %.2f\n",p[i].name,p[i].avg);
    return 0;
}
