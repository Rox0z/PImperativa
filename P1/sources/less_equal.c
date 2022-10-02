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
    // A função de less_equal é feita com a lógica de de, se X - Y tiver um resultado positivo ou 0, significa que X >= Y, porém queremos saber o contrário, se X <= Y, portanto podemos apenas inverter a diferença para Y - X
    return is_pos(dif(y,x)); // Retorna se a diferença entre Y e X é positiva, emulando X <= Y
    // depois de fazer a diferença apenas veridicamos se seu resultado é positivo e retornamos
}

int main(void) {
    int x, y;
    scanf("%d%d", &x, &y);
    printf("%d\n",less_eq(x,y));
    return 0;
}