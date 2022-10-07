#include <stdio.h>

int sum_ints(int resultado, int n)
{
    return n == 0 ? resultado : sum_ints(resultado + n, n - 1);
}

void test_sum_ints()
{
    int n;
    int r;
    while (scanf("%d%d", &r, &n) != EOF)
    {
        printf("%d\n", sum_ints(r, n));
    }
}

int main(void)
{
    test_sum_ints();
    return 0;
}
