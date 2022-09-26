#include <stdio.h>

const char *author = "Leonardo Albudane";

int succ(int x);
int pred(int x);
int is_zero(int x);
int is_pos(int x);

int sum(int x, int y) {
    return is_zero(y) ? x : sum(succ(x), pred(y));
}

int main(void) {
    int x, y;
    scanf("%d%d", &x, &y);
    printf("%d\n",sum(x,y));
    return 0;
}