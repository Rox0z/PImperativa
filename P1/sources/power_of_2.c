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

int power2(int base, int expoente) {
    // A lógica da exponenciação é um número tem que ser multiplicado por ele mesmo pela quantidade de vezes que seu expoente diz, e como queremos fazer isso da base 2, podemos usar twice, já que 2 * 2 também é 2 + 2
    // Então o que podemos fazer é fazer twice(base) enquanto expoente for maior que 0, mas também precisamos lembrar das regras, se o expoente for 0, retornamos 1, se o expoente for 1, retornamos a base
    return is_zero(expoente)    // Verificamos se o expoente é 0
    ? 1                         // Se for retornamos 1 (regra da potência)
    : is_zero(pred(expoente))   // Se não for nós verificamos se o expoente é 1 (verificando se X - 1 é 0)
        ? base                                  // Se o expoente for 1, retornamos a base
        : power2(twice(base), pred(expoente));  // Senão retornamos a potência com o dobro da base e o expoente - 1
}


int main(void) {
    int x;
    scanf("%d", &x);
    printf("%d\n", power2(succ(1), x));
    return 0;
}