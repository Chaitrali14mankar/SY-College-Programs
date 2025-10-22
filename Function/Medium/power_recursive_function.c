#include <stdio.h>
int power(int b,int e){ if(e==0) return 1; return b*power(b,e-1); }
int main(){
    int b,e; scanf("%d %d",&b,&e);
    printf("%d^%d = %d\n", b,e,power(b,e));
    return 0;
}
