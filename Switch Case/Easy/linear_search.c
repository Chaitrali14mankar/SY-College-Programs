#include <stdio.h>
int main() {
    int n,key,found=0;
    printf("Enter array size: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    printf("Enter element to search: ");
    scanf("%d",&key);
    for(int i=0;i<n;i++) if(arr[i]==key){ found=1; break; }
    if(found) printf("%d found\n",key);
    else printf("%d not found\n",key);
    return 0;
}
