#include <stdio.h>

int points(const int *contests, int n)
{
    int resultado = 0;
    for (int i = 0, j = n / 2; i < n / 2; i++, j++)
        resultado = contests[j] * 2 >= contests[i] ? (contests[j] * 3) + 1 : contests[j] * 3;
    return resultado;
}

void test(void)
{
    int contests[1000] = {}, i = 0;
    while (scanf("%d", &contests[i]) != EOF)
        i++;

    printf("%d\n", points(contests, i));
}

int main(void)
{
    test();
    return 0;
}