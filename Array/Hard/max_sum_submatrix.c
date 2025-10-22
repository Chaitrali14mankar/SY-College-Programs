#include <stdio.h>
int main(){
    int n,m,i,j; scanf("%d %d",&n,&m); int a[n][m];
    for(i=0;i<n;i++) for(j=0;j<m;j++) scanf("%d",&a[i][j]);
    int maxsum=-999999,sum;
    for(i=0;i<n;i++) for(j=0;j<m;j++){
        for(int p=i;p<n;p++) for(int q=j;q<m;q++){
            sum=0; for(int x=i;x<=p;x++) for(int y=j;y<=q
