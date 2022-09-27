#include <stdio.h>

const char *author = "Leonardo Albudane";

int succ(int x);
int pred(int x);
int is_zero(int x);
int is_pos(int x);

int dpred(int x) {
    return pred(pred(x));
}

int dsucc(int x) {
    return succ(succ(x));
}

int half(int x, int y) {
    return is_zero(y) ? x : is_pos(x) ? half(pred(x), dpred(y)) : half(succ(x), dsucc(y));
}

int main(void) {
    int x;
    scanf("%d", &x);
    printf("%d\n",half(x, x));
    return 0;
}