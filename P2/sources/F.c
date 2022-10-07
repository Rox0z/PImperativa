#include <stdio.h>
#include <math.h>

double sum_squares_from(int n, double x)
{
    return n < 0 ? 0 : sum_squares_from(n - 1, x) + pow((n + x), 2);
}

void test_sum_squares_from()
{
    double x;
    int n;
    while (scanf("%lf%d", &x, &n) != EOF)
    {
        printf("%f\n", sum_squares_from(n - 1, x));
    }
}

int main(void)
{
    test_sum_squares_from();
    return 0;
}