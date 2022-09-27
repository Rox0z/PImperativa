#include <stdio.h>

const char *author = "Leonardo Albudane";

int succ(int x);
int pred(int x);
int is_zero(int x);
int is_pos(int x);

int dif(int x, int y) {
    return is_zero(y)           // Verifica se é zero
    ? x                         // Se sim retorna X
    : dif(pred(x), pred(y));    // Se não repete a diferença de X-1 e Y-1
}

int main(void) {
    int x, y;
    scanf("%d%d", &x, &y);
    printf("%d\n",dif(x,y));
    return 0;
}