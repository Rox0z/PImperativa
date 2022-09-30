//! Código interditado para reformas!!!! (simplificar e optmizar)

// #include <stdio.h>

// const char *author = "Leonardo Albudane";

// int succ(int x);
// int pred(int x);
// int is_zero(int x);
// int is_pos(int x);

// int sum(int x, int y) { // Doc no exercicio B
//     return is_zero(y) ? x : sum(succ(x), pred(y));
// }

// int mult(int x, int y) { 
//     return is_zero(x) || is_zero(y)     // Verifica se X ou Y são zero
//     ? 0                                 // Se sim retorna 0 (0 * n == 0)
//     : sum(x, mult(x, pred(y)));         // Se não soma com X e multiplicação de X com Y-1
// }

// int power(int x, int y) {
//     return is_zero(y)                   // Verifica se Y == 0
//     ? 1                                 // Se sim retorna 1
//     : is_zero(pred(y))                  // Se não verifica se Y-1 == 0 (Y == 1)
//         ? x                                 // Se sim retorna X (X ** 1 == X)
//         : mult(power(x, pred(y)), x);       // Se não retorna multiplicação da potência de X e Y-1 com X
// }

// int main(void) {
//     int x;
//     scanf("%d", &x);
//     printf("%d\n", power(succ(1), x));
//     return 0;
// }