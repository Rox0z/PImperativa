#include <stdio.h>
#include <math.h>

double sum_power_from(int n, double x, double y)
{
    return n < 0 ? 0 : sum_power_from(n - 1, x, y) + pow((n + x), y);
}

void test_sum_power_from()
{
    double x, y;
    int n;
    while (scanf("%lf%lf%d", &x, &y, &n) != EOF)
    {
        printf("%f\n", sum_power_from(n-1, x, y));
    }
}

int main(void)
{
    test_sum_power_from();
    return 0;
}