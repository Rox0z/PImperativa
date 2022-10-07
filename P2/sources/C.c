#include <stdio.h>

int sum_ints(int resultado, int n)
{
    return n == 0 ? resultado : sum_ints(resultado + n, n - 1);
}

int sum_mults(int n, int r)
{
    return sum_ints(0, n - 1) * r;
}

void test_sum_mults()
{
    int r, n;
    while (scanf("%d%d", &r, &n) != EOF)
    {
        printf("%d\n", sum_mults(n, r));
    }
}

int main(void)
{
    test_sum_mults();
    return 0;
}