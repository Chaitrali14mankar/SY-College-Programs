#include <stdio.h>
int main(){
    int n, i, flag=1;
    printf("n: "); scanf("%d",&n);
    int a[n]; for(i=0;i<n;i++) scanf("%d",&a[i]);
    for(i=0;i<n/2;i++) if(a[i]!=a[n-1-i]){ flag=0; break; }
    if(flag) printf("Palindrome\n"); else printf("Not Palindrome\n");
    return 0;
}
