#include <stdio.h>
int main() {
    int num=2;
    for(int i=1;i<=5;i++) {
        for(int j=1;j<=i;j++) {
            printf("%d ",num);
            num+=2;
        }
        printf("\n");
    }
    return 0;
}
