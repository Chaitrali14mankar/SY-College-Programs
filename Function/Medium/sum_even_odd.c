#include <stdio.h>
void sumEvenOdd(int a[], int n, int *even, int *odd){
    *even=0; *odd=0;
    for(int i=0;i<n;i++){
        if(a[i]%2==0) *even+=a[i]; else *odd+=a[i];
    }
}
int main(){
    int n; scanf("%d",&n); int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    int even,odd; sumEvenOdd(a,n,&even,&odd);
    printf("Even sum = %d, Odd sum = %d\n", even, odd);
    return 0;
}
