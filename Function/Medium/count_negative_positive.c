#include <stdio.h>
void countPosNeg(int a[], int n, int *pos,int *neg){
    *pos=0; *neg=0;
    for(int i=0;i<n;i++){
        if(a[i]>0) (*pos)++;
        else if(a[i]<0) (*neg)++;
    }
}
int main(){
    int n; scanf("%d",&n); int a[n]; for(int i=0;i<n;i++) scanf("%d",&a[i]);
    int pos,neg; countPosNeg(a,n,&pos,&neg);
    printf("Positive=%d, Negative=%d\n", pos,neg);
    return 0;
}
