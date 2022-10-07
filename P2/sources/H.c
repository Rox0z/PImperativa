#include <stdio.h>

double sum_inverse(double resultado, double n)
{
    return n == 0 ? resultado : sum_inverse(resultado + (1 / n), n - 1);
}

void test_sum_inverse()
{
    double n;
    while (scanf("%lf", &n) != EOF)
    {
        printf("%f\n", sum_inverse(0, n));
    }
}

int main(void)
{
    test_sum_inverse();
    return 0;
}
