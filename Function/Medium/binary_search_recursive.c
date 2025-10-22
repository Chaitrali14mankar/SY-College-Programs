#include <stdio.h>
int binarySearch(int a[], int l,int r,int x){
    if(r>=l){
        int mid=l+(r-l)/2;
        if(a[mid]==x) return mid;
        if(a[mid]>x) return binarySearch(a,l,mid-1,x);
        return binarySearch(a,mid+1,r,x);
    }
    return -1;
}
int main(){
    int n,x; scanf("%d",&n); int a[n]; for(int i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&x);
    int idx=binarySearch(a,0,n-1,x);
    if(idx!=-1) printf("Found at index %d\n", idx);
    else printf("Not found\n");
    return 0;
}
