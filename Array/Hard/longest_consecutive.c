#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a,const void *b){ return *(int*)a - *(int*)b; }
int main(){
    int n,i,count=1,maxcount=1; scanf("%d",&n); int a[n]; for(i=0;i<n;i++) scanf("%d",&a[i]);
    qsort(a,n,sizeof(int),cmp);
    for(i=1;i<n;i++){
        if(a[i]==a[i-1]+1) count++;
        else if(a[i]!=a[i-1]) count=1;
        if(count>maxcount) maxcount=count;
    }
    printf("Longest consecutive length = %d\n", maxcount);
    return 0;
}
