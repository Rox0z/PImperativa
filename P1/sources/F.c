//! Código interditado para reformas!!!! (simplificar e optmizar)

// #include <stdio.h>

// const char *author = "Leonardo Albudane";

// int succ(int x);
// int pred(int x);
// int is_zero(int x);
// int is_pos(int x);

// int dpred(int x) { // Retorna X - 2
//     return pred(pred(x));
// }

// int dsucc(int x) { // Retorna X + 2
//     return succ(succ(x));
// }

// int half(int x, int y) {
//     return is_zero(y)               // Verifica se é zero
//     ? x                             // Se sim retorna X
//     : is_pos(x)                     // Se não verifica se é positivo
//         ? is_pos(y) ? half(pred(x), dpred(y)) : x       // Se sim refaz o comando com X-1 e Y-2
//         : is_pos(y) ? x : half(succ(x), dsucc(y));      // Se não refaz o comando com X+1 e Y-2
// }

// int main(void) {
//     int x;
//     scanf("%d", &x);
//     printf("%d\n",half(x, x));
//     return 0;
// }

