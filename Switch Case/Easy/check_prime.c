#include <stdio.h>
#include <math.h>
int main() {
    int n,flag=1;
    printf("Enter number: ");
    scanf("%d",&n);
    if(n<2) flag=0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){ flag=0; break;}
    }
    if(flag) printf("%d is Prime\n",n);
    else printf("%d is Not Prime\n",n);
    return 0;
}
