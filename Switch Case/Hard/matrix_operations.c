#include <stdio.h>
int main() {
    int a[2][2], b[2][2], c[2][2], i, j, ch;
    printf("Enter 2x2 matrix A:\n");
    for(i=0;i<2;i++) for(j=0;j<2;j++) scanf("%d",&a[i][j]);
    printf("Enter 2x2 matrix B:\n");
    for(i=0;i<2;i++) for(j=0;j<2;j++) scanf("%d",&b[i][j]);
    printf("1.Add 2.Subtract 3.Transpose A\nChoice: ");
    scanf("%d",&ch);
    switch(ch){
        case 1: for(i=0;i<2;i++){ for(j=0;j<2;j++){ c[i][j]=a[i][j]+b[i][j]; printf("%d ",c[i][j]); } printf("\n"); } break;
        case 2: for(i=0;i<2;i++){ for(j=0;j<2;j++){ c[i][j]=a[i][j]-b[i][j]; printf("%d ",c[i][j]); } printf("\n"); } break;
        case 3: for(i=0;i<2;i++){ for(j=0;j<2;j++){ printf("%d ",a[j][i]); } printf("\n"); } break;
        default: printf("Invalid");
    }
}
// matrix_operations.c
