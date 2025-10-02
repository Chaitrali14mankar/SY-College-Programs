#include <stdio.h>
int main() {
    int n=3,m=7;
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=m;j++) {
            if((i+j)%4==0 || (i==2 && j%4==0)) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}
