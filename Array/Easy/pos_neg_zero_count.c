#include <stdio.h>
int main(){
    int n; printf("n: "); if(scanf("%d",&n)!=1) return 0;
    int x, i, pos=0, neg=0, zero=0;
    for(i=0;i<n;i++){ scanf("%d",&x); if(x>0) pos++; else if(x<0) neg++; else zero++; }
    printf("Positive=%d, Negative=%d, Zero=%d\n", pos, neg, zero);
    return 0;
}
