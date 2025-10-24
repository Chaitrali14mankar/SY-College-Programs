#include <stdio.h>
void bubble(int a[],int n){ for(int i=0;i<n-1;i++) for(int j=0;j<n-i-1;j++) if(a[j]>a[j+1]){int t=a[j];a[j]=a[j+1];a[j+1]=t;} }
void selection(int a[],int n){ for(int i=0;i<n-1;i++){ int m=i; for(int j=i+1;j<n;j++) if(a[j]<a[m]) m=j; int t=a[i];a[i]=a[m];a[m]=t; } }
void insertion(int a[],int n){ for(int i=1;i<n;i++){ int key=a[i],j=i-1; while(j>=0&&a[j]>key){a[j+1]=a[j]; j--;} a[j+1]=key; } }

int main(){
    int ch,n,a[50];
    printf("Enter size: "); scanf("%d",&n);
    printf("Enter elements: ");
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    printf("1.Bubble 2.Selection 3.Insertion\nChoice: ");
    scanf("%d",&ch);
    switch(ch){
        case 1: bubble(a,n); break;
        case 2: selection(a,n); break;
        case 3: insertion(a,n); break;
        default: printf("Invalid"); return 0;
    }
    printf("Sorted: ");
    for(int i=0;i<n;i++) printf("%d ",a[i]);
}
// sorting_menu.c
