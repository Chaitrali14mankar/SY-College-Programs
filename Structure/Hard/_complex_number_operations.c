#include <stdio.h>
struct Complex { float r, i; };
struct Complex add(struct Complex a, struct Complex b){
    struct Complex s = {a.r+b.r, a.i+b.i};
    return s;
}
struct Complex sub(struct Complex a, struct Complex b){
    struct Complex s = {a.r-b.r, a.i-b.i};
    return s;
}
int main() {
    struct Complex c1={3,4}, c2={2,1};
    struct Complex sum=add(c1,c2), diff=sub(c1,c2);
    printf("Sum = %.1f+%.1fi\n",sum.r,sum.i);
    printf("Diff = %.1f+%.1fi\n",diff.r,diff.i);
    return 0;
}
