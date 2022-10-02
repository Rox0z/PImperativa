#include <stdio.h>

const char *author = "Leonardo Albudane";

int succ(int x);
int pred(int x);
int is_zero(int x);
int is_pos(int x);

int half(int x, int y) {
    // Para a função de half (metade), podemos usar a mesma lógica da função de diferença, remover o valor de um número e remover do outro, porém usaremos o mesmo número igual fizemos anteriormente na função twice
    // Considere X = 10
    // Se a diferença de X e X (representado como Y dentro da função) é igual a 0 por conta X perder valor enquanto Y possui valor, nós podemos apenas acelerar a velocidade em que Y perde valor em 2x
    // Como fazmos isso? Simples, você pode fazer a diferença só que ao invés de fazer pred(x) e pred(y), você fazer pred(x) e pred(pred(y)), assim Y vai perder valor 2 vezes toda vez que a função for chamada, perdendo valor 2x mais rápido que X
    // Mas existe outra situação, números ímpares vão saltar de 1 para -1, portanto teremos que verificar se Y >= 0, se não for ele pode retonar o X já que Y se tornou negativo, mas se ele for >= 0, então teremos que verificar se Y == 0, pois se for ele também tem que retornar X, já que ele não tem mais valor para perder, mas se Y >= 0 e não Y == 0 significa que ele tem valor para ser retirado, chamando a função half novamente
    return is_pos(y)    // Verificamos se Y é positivo
    ? is_zero(y)        // Se sim verificamos se Y == 0
        ? x                             // Se Y for igual a 0 então retornamos X
        : half(pred(x), pred(pred(y)))  // Senão fazermos a função novamente
    : x;                // Senão retornamos X pois Y não tem valor positivo
}

int main(void) {
    int x;
    scanf("%d", &x);
    printf("%d\n",half(x, x));
    return 0;
}

