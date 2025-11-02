#include <stdio.h>

int main() {
    char *names[] = {"C", "C++", "Python", "Java"};
    for (int i = 0; i < 4; i++)
        printf("%s\n", names[i]);
    return 0;
}
