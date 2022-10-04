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
    sum(x,x);                         // soma X com X (X * 2)
}

int main(void) {
    int x; // Aqui removemos a variável Y pois não é necessaria, apenas precisamos de 1 valor
    scanf("%d", &x);
    printf("%d\n",twice(x));
    return 0;
}
