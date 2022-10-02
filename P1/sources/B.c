#include <stdio.h>

const char *author = "Leonardo Albudane";

int succ(int x);        // X + 1
int pred(int x);        // X - 1
int is_zero(int x);     // X == 0
int is_pos(int x);      // X >= 0

int sum(int x, int y) {
    // Para fazermos uma soma com apenas succ e pred, devemos usar a lógica de tirar o valor de X enquanto Y for maior que zero, ou seja tem valor. Portanto:
    return is_zero(y)           // Verifica se é zero
    ? x                         // Se sim: retorna X
    : sum(succ(x), pred(y));    // Se não repete a função de soma com X+1 e Y-1
    // Assim toda vez que a soma for chamada e Y for maior que 0, ele vai aumentar X e diminuir Y e fazer a soma de novo, até que a condição Y == 0 seja verdadeira, e retornará o valor de X
}

int main(void) {
    int x, y;
    scanf("%d%d", &x, &y);
    printf("%d\n",sum(x,y));
    return 0;
}