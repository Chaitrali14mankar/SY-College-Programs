#include <stdio.h>
#include <string.h>
#include <math.h>
int main() {
    char hex[20];
    int dec=0,len;
    printf("Enter hex: ");
    scanf("%s",hex);
    len=strlen(hex);
    for(int i=0;hex[i]!='\0';i++) {
        char c=hex[i];
        int d=(c>='0'&&c<='9')?c-'0':(c>='A'&&c<='F')?c-'A'+10:c-'a'+10;
        dec+=d*pow(16,len-i-1);
    }
    printf("Decimal = %d",dec);
    return 0;
}
