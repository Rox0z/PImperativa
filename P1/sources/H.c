#include <stdio.h>

const char *author = "Leonardo Albudane";

int succ(int x);
int pred(int x);
int is_zero(int x);
int is_pos(int x);

int sum(int x, int y) {
    return is_zero(y) ? x : sum(succ(x), pred(y));
}

int power(int x, int y) {
    return is_zero(y) ? x : is_zero(x) ? 0 : power(sum(x, x), pred(y));
}

int sq(int x) {
    return is_zero(x) ? 0 : power(succ(1), pred(x));
}

int main(void) {
    int x;
    scanf("%d", &x);
    printf("%d\n", sq(x));
    return 0;
}