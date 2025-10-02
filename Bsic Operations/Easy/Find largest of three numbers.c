#include <stdio.h>
int main() {
    int a=5,b=12,c=9;
    if(a>b && a>c) printf("Largest = %d",a);
    else if(b>c) printf("Largest = %d",b);
    else printf("Largest = %d",c);
    return 0;
}
