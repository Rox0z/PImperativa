#include <stdio.h>

const char *author = "Leonardo Albudane";

int succ(int x);
int pred(int x);
int is_zero(int x);
int is_pos(int x);

int dif(int x, int y) {
    return is_zero(y) ? x : dif(pred(x), pred(y));
}

int less_eq(int x, int y) {
    return is_pos(dif(y,x));
}
int dpred(int x, int y) {
    return less_eq(y, 0) ? x : dpred(pred(x), pred(pred(y)));
}

int half(int x) {
    return is_zero(x) ? x : dpred(x,x);
}

int main(void) {
    int x;
    scanf("%d", &x);
    printf("%d\n",half(x));
    return 0;
}