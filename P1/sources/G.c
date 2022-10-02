#include <stdio.h>

const char *author = "Leonardo Albudane";

int succ(int x);
int pred(int x);
int is_zero(int x);
int is_pos(int x);

int dif(int x, int y) { // Doc no exercicio C
    return is_zero(y) ? x : dif(pred(x), pred(y));
}

int max(int x, int y) { // Como foi explicado no exercício D, para sabermos de X >= Y devemos saber se o resultado da diferença entre eles é positiva ou negativa, se X - Y tiver resultado positivo retornamos X por ele ser maior senão retornamos Y
    return is_pos(dif(x, y)) // Verificamos se o resultado de X - Y é positivo
    ? x     // Se for então X >= Y e retornamos X
    : y;    // Se não for então Y >= X e retornamos Y
}

int main(void) {
    int x, y;
    scanf("%d%d", &x, &y);
    printf("%d\n",max(x, y));
    return 0;
}