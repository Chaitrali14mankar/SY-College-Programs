#include <stdio.h>
struct Account {
    int acc_no;
    char name[30];
    float balance;
};
int main() {
    struct Account a[3];
    for(int i=0;i<3;i++){
        printf("Enter AccNo, Name, Balance: ");
        scanf("%d %s %f",&a[i].acc_no,a[i].name,&a[i].balance);
    }
    printf("\nAccount Holders with Balance > 5000:\n");
    for(int i=0;i<3;i++)
        if(a[i].balance > 5000)
            printf("%d %s %.2f\n",a[i].acc_no,a[i].name,a[i].balance);
    return 0;
}
