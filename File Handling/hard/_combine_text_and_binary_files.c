#include <stdio.h>
struct Info { int id; char msg[50]; };
int main() {
    FILE *txt = fopen("data.txt", "r");
    FILE *bin = fopen("info.dat", "wb");
    struct Info i; int id = 1;
    while (fgets(i.msg, sizeof(i.msg), txt)) {
        i.id = id++;
        fwrite(&i, sizeof(i), 1, bin);
    }
    fclose(txt); fclose(bin);
    printf("Combined text into binary records.\n");
    return 0;
}
