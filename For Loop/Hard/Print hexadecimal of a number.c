#include <stdio.h>
int main() {
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    char hex[32];
    int i=0;
    for(;n>0;n/=16) {
        int r=n%16;
        hex[i++]= (r<10)? r+'0' : r-10+'A';
    }
    for(int j=i-1;j>=0;j--) printf("%c",hex[j]);
    return 0;
}
