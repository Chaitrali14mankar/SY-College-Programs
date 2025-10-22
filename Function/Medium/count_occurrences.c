#include <stdio.h>
int countOccurrences(int a[], int n, int x){
    int count=0;
    for(int i=0;i<n;i++) if(a[i]==x) count++;
    return count;
}
int main(){
    int n,x; scanf("%d",&n); int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&x);
    printf("Occurrences of %d = %d\n", x, countOccurrences(a,n,x));
    return 0;
}
