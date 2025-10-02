#include <stdio.h>
int main() {
    int a,b,c;
    printf("Enter angles of triangle: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a+b+c!=180)
        printf("Not a triangle");
    else if(a==90 || b==90 || c==90)
        printf("Right-angled Triangle");
    else if(a>90 || b>90 || c>90)
        printf("Obtuse Triangle");
    else
        printf("Acute Triangle");
    return 0;
}
