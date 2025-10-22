#include <stdio.h>
int main() {
    double a,b;
    char op;
    printf("Enter operator (+,-,*,/): ");
    scanf(" %c",&op);
    printf("Enter two numbers: ");
    scanf("%lf%lf",&a,&b);
    switch(op){
        case '+': printf("%.2lf\n",a+b); break;
        case '-': printf("%.2lf\n",a-b); break;
        case '*': printf("%.2lf\n",a*b); break;
        case '/': if(b!=0) printf("%.2lf\n",a/b);
                  else printf("Division by zero!\n"); break;
        default: printf("Invalid operator\n");
    }
    return 0;
}
