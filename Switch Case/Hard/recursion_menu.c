#include <stdio.h>
int fact(int n){ return n==0?1:n*fact(n-1); }
int fib(int n){ return n<=1?n:fib(n-1)+fib(n-2); }
int power(int b,int e){ return e==0?1:b*power(b,e-1); }

int main(){
    int ch,n,b,e;
    printf("1.Factorial 2.Fibonacci 3.Power\nChoice: ");
    scanf("%d",&ch);
    switch(ch){
        case 1: printf("Enter n: "); scanf("%d",&n); printf("Fact=%d",fact(n)); break;
        case 2: printf("Enter n: "); scanf("%d",&n);
                for(int i=0;i<n;i++) printf("%d ",fib(i)); break;
        case 3: printf("Base, Exp: "); scanf("%d%d",&b,&e);
                printf("Power=%d",power(b,e)); break;
        default: printf("Invalid");
    }
}
// recursion_menu.c
