#include <stdio.h>

const char *author = "Leonardo Albudane";

int succ(int x);
int pred(int x);
int is_zero(int x);
int is_pos(int x);

int sum(int x, int y) { // Doc no exercicio B
    return is_zero(y) ? x : sum(succ(x), pred(y));
}

int twice(int x) { 
    // Uma forma simples de achar o dobro é fazendo ele somar com ele mesmo, então podemos reutilizar a função de soma
    // ! ATENÇÃO!!!: A função de soma precisa excepcionalmente de 2 valores, um para adicionar valor e um para retirar valor, que serão representados com X e Y dentro da função de soma, se você quer a soma de um número com ele mesmo, você pode apenas passar o mesmo número duas vezes, como no exemplo abaixo usamos X e X novamente.
    return is_zero(x)                   // Verifica se X == 0
    ? 0                                 // Se sim retorna 0 (0 * 2 == 0)
    : sum(x,x);                         // Se não soma X com X (X * 2)
}

int main(void) {
    int x; // Aqui removemos a variável Y pois não é necessaria, apenas precisamos de 1 valor
    scanf("%d", &x);
    printf("%d\n",twice(x));
    return 0;
}
