#include <stdio.h>
#include <math.h>

double sum_inverse_square(double resultado, double n)
{
    return n == 0 ? resultado : sum_inverse_square(resultado + (1 / pow(n, 2)), n - 1);
}

void test_sum_inverse_square()
{
    double n;
    while (scanf("%lf", &n) != EOF)
    {
        printf("%f\n", sum_inverse_square(0, n));
    }
}

int main(void)
{
    test_sum_inverse_square();
    return 0;
}
