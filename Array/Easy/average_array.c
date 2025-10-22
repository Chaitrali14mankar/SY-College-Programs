#include <stdio.h>
int main(){
    int n; printf("n: "); if(scanf("%d",&n)!=1) return 0;
    double sum=0; int i; double x;
    for(i=0;i<n;i++){ scanf("%lf",&x); sum+=x; }
    printf("Average = %.2f\n", (n? sum/n : 0.0));
    return 0;
}
