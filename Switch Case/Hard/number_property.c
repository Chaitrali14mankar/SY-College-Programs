#include <stdio.h>
#include <math.h>
int main() {
    int n,ch,i,sum=0,temp,rem;
    printf("Enter number: ");
    scanf("%d",&n);
    printf("1.Prime 2.Armstrong 3.Palindrome 4.Perfect\nChoice: ");
    scanf("%d",&ch);
    switch(ch){
        case 1:
            for(i=2;i<=n/2;i++) if(n%i==0){ printf("Not Prime"); return 0; }
            printf("Prime"); break;
        case 2:
            temp=n; while(temp){ rem=temp%10; sum+=pow(rem,3); temp/=10; }
            printf(sum==n?"Armstrong":"Not Armstrong"); break;
        case 3:
            temp=n; int rev=0; while(temp){ rev=rev*10+temp%10; temp/=10; }
            printf(rev==n?"Palindrome":"Not Palindrome"); break;
        case 4:
            temp=1; sum=0; for(i=1;i<n;i++) if(n%i==0) sum+=i;
            printf(sum==n?"Perfect":"Not Perfect"); break;
        default: printf("Invalid");
    }
}
// number_property.c
