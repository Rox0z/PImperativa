#include <stdio.h>

const char *author = "Leonardo Albudane";

int succ(int x);
int pred(int x);
int is_zero(int x);
int is_pos(int x);

int sum(int x, int y) {
    return is_zero(y) ? x : sum(succ(x), pred(y));
}

int dif(int x, int y) {
    return is_zero(y) ? x : dif(pred(x), succ(y));
}

int twice(int x) {
    return is_zero(x) ? 0 : is_pos(x) ? sum(x,x) : dif(x,x);
}

int main(void) {
    int x;
    scanf("%d", &x);
    printf("%d\n",twice(x));
    return 0;
}