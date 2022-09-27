#include <stdio.h>

const char *author = "Leonardo Albudane";

int succ(int x);
int pred(int x);
int is_zero(int x);
int is_pos(int x);

int dif(int x, int y) { // Doc no exercicio C
    return is_zero(y) ? x : dif(pred(x), pred(y));
}

int less_eq(int x, int y) {
    return is_pos(dif(y,x)); // Retorna se a diferença entre Y e X é positiva, emulando X <= Y
}

int main(void) {
    int x, y;
    scanf("%d%d", &x, &y);
    printf("%d\n",less_eq(x,y));
    return 0;
}