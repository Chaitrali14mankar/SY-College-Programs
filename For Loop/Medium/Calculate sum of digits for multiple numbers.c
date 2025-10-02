#include <stdio.h>
int main() {
    for(int n=10; n<=15; n++) {
        int sum=0, temp=n;
        while(temp>0) {
            sum+=temp%10;
            temp/=10;
        }
        printf("Sum of digits of %d = %d\n", n, sum);
    }
    return 0;
}
