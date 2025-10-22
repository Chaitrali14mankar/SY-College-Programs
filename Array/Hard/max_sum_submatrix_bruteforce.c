#include <stdio.h>
int main(){
    int n,m,i,j; 
    scanf("%d %d",&n,&m); 
    int a[n][m];
    for(i=0;i<n;i++) for(j=0;j<m;j++) scanf("%d",&a[i][j]);
    int maxsum=-999999, sum, p, q, x, y;
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            for(p=i;p<n;p++)
                for(q=j;q<m;q++){
                    sum=0;
                    for(x=i;x<=p;x++)
                        for(y=j;y<=q;y++)
                            sum+=a[x][y];
                    if(sum>maxsum) maxsum=sum;
                }
    printf("Maximum submatrix sum = %d\n", maxsum);
    return 0;
}
