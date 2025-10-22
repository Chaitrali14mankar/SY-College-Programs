#include <stdio.h>
int main(){
    int n; scanf("%d",&n); int a[n], i;
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    int len=1, maxlen=1;
    for(i=1;i<n;i++){
        if(a[i]>a[i-1]) len++;
        else len=1;
        if(len>maxlen) maxlen=len;
    }
    printf("Length of longest increasing subarray = %d\n", maxlen);
    return 0;
}
