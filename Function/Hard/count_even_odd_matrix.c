#include <stdio.h>
void countEvenOdd(int r,int c,int a[r][c],int *even,int *odd){
    *even=0; *odd=0;
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++){
            if(a[i][j]%2==0) (*even)++;
            else (*odd)++;
        }
}
int main(){
    int r,c; scanf("%d %d",&r,&c);
    int a[r][c]; for(int i=0;i<r;i++) for(int j=0;j<c;j++) scanf("%d",&a[i][j]);
    int e,o; countEvenOdd(r,c,a,&e,&o);
    printf("Even=%d, Odd=%d\n", e,o);
    return 0;
}
