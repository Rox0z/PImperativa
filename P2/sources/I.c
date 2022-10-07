#include <stdio.h>
#include <math.h>

double sum_inverse_square(double n)
{
    return n == 0 ? 0 : sum_inverse_square(n - 1) + (1 / pow(n, 2));
}

void test_sum_inverse_square()
{
    double n;
    while (scanf("%lf", &n) != EOF)
    {
        printf("%f\n", sum_inverse_square(n));
    }
}

int main(void)
{
    test_sum_inverse_square();
    return 0;
}
