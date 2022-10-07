#include <stdio.h>

int sum_ints(int n)
{
    return n == 0 ? 0 : sum_ints(n - 1)  + n;
}

void test_sum_ints()
{
    int n;
    while (scanf("%d", &n) != EOF)
    {
        printf("%d\n", sum_ints(n));
    }
}

int main(void)
{
    test_sum_ints();
    return 0;
}
