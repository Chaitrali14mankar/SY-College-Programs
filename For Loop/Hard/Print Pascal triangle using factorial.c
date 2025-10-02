#include <stdio.h>
int fact(int n) {
    int f=1;
    for(int i=1;i<=n;i++) f*=i;
    return f;
}
int main() {
    int n=5;
    for(int i=0;i<n;i++) {
        for(int j=0;j<=i;j++) {
            printf("%d ",fact(i)/(fact(j)*fact(i-j)));
        }
        printf("\n");
    }
    return 0;
}
