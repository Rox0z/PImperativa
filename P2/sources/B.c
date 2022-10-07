#include <stdio.h>

double sum_ints(double resultado, double n)
{
    return n == 0 ? resultado : sum_ints(resultado + n, n - 1);
}

double avg_sum_ints(double resultado, double n)
{
    return sum_ints(resultado, n) / n;
}

void test_avg_sum_ints()
{
    double n;
    while (scanf("%lf", &n) != EOF)
    {
        printf("%f\n", avg_sum_ints(0.0, n));
    }
}

int main(void)
{
    test_avg_sum_ints();
    return 0;
}