#include <stdio.h>
int main() {
    int choice; float balance=1000, amt;
    printf("1.Deposit\n2.Withdraw\n3.Balance\nEnter choice: ");
    scanf("%d", &choice);
    switch(choice) {
        case 1: printf("Enter amount: "); scanf("%f", &amt); balance+=amt; break;
        case 2: printf("Enter amount: "); scanf("%f", &amt);
                if(balance>=amt) balance-=amt; else printf("Insufficient funds\n"); break;
        case 3: printf("Current Balance = %.2f\n", balance); break;
        default: printf("Invalid choice");
    }
    printf("Updated Balance = %.2f", balance);
}
