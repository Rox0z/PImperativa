#include <stdio.h>
#include <math.h>

double sum_power_from(double resultado, double x, int y, int n)
{
    return n < 0 ? resultado : sum_power_from(resultado + pow((n + x), y), x, y, n - 1);
}

void test_sum_power_from()
{
    double x, y;
    int n;
    while (scanf("%lf%lf%d", &x, &y, &n) != EOF)
    {
        printf("%f\n", sum_power_from(0, x, y, n));
    }
}

int main(void)
{
    test_sum_power_from();
    return 0;
}