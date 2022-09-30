#include <stdio.h>

const char *author = "Leonardo Albudane";

int succ(int x);
int pred(int x);
int is_zero(int x);
int is_pos(int x);

int sum(int x, int y) { // Doc no exercicio B
    return is_zero(y) ? x : sum(succ(x), pred(y));
}

int neg_sum(int x, int y) { // Sum para numeros negativos para não causar overflow e dar uma resposta mais rápida
    return is_zero(y) ? x : neg_sum(pred(x), succ(y));
}

int twice(int x) { 
    return is_zero(x)                   // Verifica se X == 0
    ? 0                                 // Se sim retorna 0 (0 * 2 == 0)
    : is_pos(x)                         // Se não verifica se é positivo
        ? sum(x,x)                          // Se sim soma X com X (X + X)
        : neg_sum(x,x);                     // Se não faz a soma de numeros negativos de X com X ((-X) + (-X))
}

int main(void) {
    int x;
    scanf("%d", &x);
    printf("%d\n",twice(x));
    return 0;
}
