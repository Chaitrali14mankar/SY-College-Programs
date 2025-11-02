#include <stdio.h>
int main() {
    FILE *fp = fopen("user.txt", "w");
    char text[100];
    printf("Enter text: ");
    fgets(text, sizeof(text), stdin);
    fputs(text, fp);
    fclose(fp);
    return 0;
}
