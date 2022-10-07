#include <stdio.h>
#include <math.h>

double sum_squares_from(double resultado, double x, int n)
{
    return n < 0 ? resultado : sum_squares_from(resultado + pow((n + x), 2), x, n - 1);
}

void test_sum_squares_from()
{
    double x;
    int n;
    while (scanf("%lf%d", &x, &n) != EOF)
    {
        printf("%f\n", sum_squares_from(0, x, n - 1));
    }
}

int main(void)
{
    test_sum_squares_from();
    return 0;
}