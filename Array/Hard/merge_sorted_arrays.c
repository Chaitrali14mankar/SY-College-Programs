#include <stdio.h>
int main(){
    int n1,n2,i,j;
    scanf("%d",&n1); int a[n1]; for(i=0;i<n1;i++) scanf("%d",&a[i]);
    scanf("%d",&n2); int b[n2]; for(i=0;i<n2;i++) scanf("%d",&b[i]);
    int c[n1+n2], p1=0,p2=0,p=0;
    while(p1<n1 && p2<n2) c[p++]=(a[p1]<b[p2]?a[p1++]:b[p2++]);
    while(p1<n1) c[p++]=a[p1++]; while(p2<n2) c[p++]=b[p2++];
    for(i=0;i<n1+n2;i++) printf("%d ",c[i]); printf("\n");
    return 0;
}
