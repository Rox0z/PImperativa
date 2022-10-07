#include <stdio.h>

int sum_progression(int x0, int r, int n)
{
    return n == 0 ? 0 : x0 + sum_progression(x0 + r, r, n - 1);
}

void test_sum_progression()
{
    int x0, r, n;
    while (scanf("%d%d%d", &x0, &r, &n) != EOF)
    {
        printf("%d\n", sum_progression(x0, r, n));
    }
}

int main(void)
{
    test_sum_progression();
    return 0;
}