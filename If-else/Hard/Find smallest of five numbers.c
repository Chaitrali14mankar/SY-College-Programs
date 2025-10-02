#include <stdio.h>
int main() {
    int a,b,c,d,e,min;
    printf("Enter five numbers: ");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    min=a;
    if(b<min) min=b;
    if(c<min) min=c;
    if(d<min) min=d;
    if(e<min) min=e;
    printf("Smallest = %d",min);
    return 0;
}
