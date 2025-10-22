#include <stdio.h>
int main(){
    int n; printf("n: "); if(scanf("%d",&n)!=1) return 0;
    int a[n], i, j; for(i=0;i<n;i++) scanf("%d",&a[i]);
    int visited = -99999999;
    for(i=0;i<n;i++){
        if(a[i]==visited) continue;
        int count=1;
        for(j=i+1;j<n;j++) if(a[j]==a[i]){ count++; a[j]=visited; }
        printf("%d occurs %d times\n", a[i], count);
    }
    return 0;
}
