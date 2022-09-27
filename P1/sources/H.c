#include <stdio.h>

const char *author = "Leonardo Albudane";

int succ(int x);
int pred(int x);
int is_zero(int x);
int is_pos(int x);

int sum(int x, int y) {
    return is_zero(y) ? x : sum(succ(x), pred(y));
}

int mult(int x, int y) {
    return is_zero(x) || is_zero(y) ? 0 : sum(x, mult(x, pred(y)));
}

int power(int x, int y) {
    return is_zero(y) ? 1 : is_zero(pred(y)) ? x : mult(power(x, pred(y)), x);
}

int main(void) {
    int x;
    scanf("%d", &x);
    printf("%d\n", power(succ(1), x));
    return 0;
}