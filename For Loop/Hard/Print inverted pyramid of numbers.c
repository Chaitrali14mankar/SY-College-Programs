#include <stdio.h>
int main() {
    int n=5;
    for(int i=n;i>=1;i--) {
        for(int j=1;j<=n-i;j++) printf(" ");
        for(int k=1;k<=i;k++) printf("%d ",k);
        printf("\n");
    }
    return 0;
}
