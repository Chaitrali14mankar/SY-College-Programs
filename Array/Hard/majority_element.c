#include <stdio.h>
int main(){
    int n; scanf("%d",&n); int a[n], i;
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    int count=0, candidate;
    for(i=0;i<n;i++){
        if(count==0){ candidate=a[i]; count=1; }
        else if(a[i]==candidate) count++;
        else count--;
    }
    count=0;
    for(i=0;i<n;i++) if(a[i]==candidate) count++;
    if(count>n/2) printf("Majority element = %d\n", candidate);
    else printf("No majority element\n");
    return 0;
}
