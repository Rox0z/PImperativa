#include <stdio.h>

double sum_inverse(double n)
{
    return n == 0 ? 0 : sum_inverse(n - 1) + (1 / n);
}

void test_sum_inverse()
{
    double n;
    while (scanf("%lf", &n) != EOF)
    {
        printf("%f\n", sum_inverse(n));
    }
}

int main(void)
{
    test_sum_inverse();
    return 0;
}
