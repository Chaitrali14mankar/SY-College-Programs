#include <stdio.h>
int main() {
    int n=4;
    for(int i=1;i<=2*n-1;i++) {
        for(int j=1;j<=2*n-1;j++) {
            int min=i<j?i:j;
            min=min<(2*n-i)?min:(2*n-i);
            min=min<(2*n-j)?min:(2*n-j);
            printf("%d ",n-min+1);
        }
        printf("\n");
    }
    return 0;
}
