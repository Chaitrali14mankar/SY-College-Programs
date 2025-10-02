#include <stdio.h>
int fact(int n) {
    int f=1;
    for(int i=1;i<=n;i++) f*=i;
    return f;
}
int comb(int n,int r) {
    return fact(n)/(fact(r)*fact(n-r));
}
int main() {
    int n=5;
    for(int i=0;i<n;i++) {
        for(int j=0;j<=i;j++) {
            printf("%d ",comb(i,j));
        }
        printf("\n");
    }
    return 0;
}
