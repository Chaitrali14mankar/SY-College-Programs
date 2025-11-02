#include <stdio.h>
struct Account { int no; char name[30]; float balance; };
void deposit(struct Account *a,float amt){ a->balance+=amt; }
void withdraw(struct Account *a,float amt){ 
    if(a->balance>=amt) a->balance-=amt;
    else printf("Insufficient Balance\n");
}
int main() {
    struct Account a={101,"Priya",5000};
    deposit(&a,1000);
    withdraw(&a,2000);
    printf("Final Balance: %.2f\n",a.balance);
    return 0;
}
