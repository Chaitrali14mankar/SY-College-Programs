#include <stdio.h>
int main() {
    int n, count=0;
    printf("Enter number: ");
    scanf("%d",&n);
    if(n<=1)
        printf("Not Prime");
    else {
        for(int i=2;i*i<=n;i++) {
            if(n%i==0) {
                count++;
                break;
            }
        }
        if(count==0)
            printf("Prime");
        else
            printf("Not Prime");
    }
    return 0;
}
