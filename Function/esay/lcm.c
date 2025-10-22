#include <stdio.h>
int gcd(int a,int b){ return b==0?a:gcd(b,a%b); }
int lcm(int a,int b){ return (a*b)/gcd(a,b); }
int main(){
    int x,y; scanf("%d %d",&x,&y);
    printf("LCM = %d\n", lcm(x,y));
    return 0;
}
