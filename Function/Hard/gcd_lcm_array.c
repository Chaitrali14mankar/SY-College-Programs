#include <stdio.h>
int gcd(int a,int b){ return b==0?a:gcd(b,a%b); }
int lcm(int a,int b){ return (a*b)/gcd(a,b); }
int gcdArray(int a[], int n){
    int res=a[0];
    for(int i=1;i<n;i++) res=gcd(res,a[i]);
    return res;
}
int lcmArray(int a[], int n){
    int res=a[0];
    for(int i=1;i<n;i++) res=lcm(res,a[i]);
    return res;
}
int main(){
    int n; scanf("%d",&n); int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    printf("GCD=%d, LCM=%d\n", gcdArray(a,n), lcmArray(a,n));
    return 0;
}
