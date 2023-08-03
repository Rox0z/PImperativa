#include <stdio.h>

const char *author = "Leonardo Albudane";

int succ(int x);
int pred(int x);
int is_zero(int x);
int is_pos(int x);

int sum(int x, int y) // este sum é diferente do sum do exercicio B, pois este leva em consideração o overflow de números negativos
{
    return is_zero(is_pos(x) ? x : y) ? is_pos(x) ? y : x : sum(pred(x), succ(y)); // Verifica se é negativo, se for retorna Y, se não retorna X, assim não corre o risco de ter um overflow
}

int twice(int x)
{
    return sum(x, x); // soma X com X (X * 2)
}

int main(void)
{
    int x; // Aqui removemos a variável Y pois não é necessaria, apenas precisamos de 1 valor
    scanf("%d", &x);
    printf("%d\n", twice(x));
    return 0;
}
