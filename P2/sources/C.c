#include <stdio.h>

int sum_ints(int n)
{
    return n == 0 ? 0 : sum_ints(n - 1)  + n;
}

int sum_mults(int n, int r)
{
    return sum_ints(n - 1) * r;
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