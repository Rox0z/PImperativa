#include <stdio.h>

double sum_progression_dbl(double x0, double r, int n)
{
    return n == 0 ? 0 : sum_progression_dbl(x0 + r, r, n - 1) + x0;
}

void test_sum_progression_dbl()
{
    double x0, r;
    int n;
    while (scanf("%lf%lf%d", &x0, &r, &n) != EOF)
    {
        printf("%f\n", sum_progression_dbl(x0, r, n));
    }
}

int main(void)
{
    test_sum_progression_dbl();
    return 0;
}