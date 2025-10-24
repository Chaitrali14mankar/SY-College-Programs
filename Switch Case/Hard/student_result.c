#include <stdio.h>
int main() {
    int m1,m2,m3;
    float avg;
    printf("Enter marks of 3 subjects: ");
    scanf("%d%d%d", &m1,&m2,&m3);
    avg=(m1+m2+m3)/3.0;
    switch((int)avg/10) {
        case 10:
        case 9: printf("Grade A+"); break;
        case 8: printf("Grade A"); break;
        case 7: printf("Grade B"); break;
        case 6: printf("Grade C"); break;
        default: printf("Fail");
    }
}
