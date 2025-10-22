#include <stdio.h>
int power(int base, int exp){
    int res=1;
    for(int i=0;i<exp;i++) res*=base;
    return res;
}
int main(){
    int b,e; scanf("%d %d",&b,&e);
    printf("%d^%d = %d\n", b,e,power(b,e));
    return 0;
}
