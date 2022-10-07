#include <stdio.h>

double sum_ints(double n)
{
    return n == 0 ? 0 : sum_ints(n - 1)  + n;
}

double avg_sum_ints(double n)
{
    return sum_ints(n) / n;
}

void test_avg_sum_ints()
{
    double n;
    while (scanf("%lf", &n) != EOF)
    {
        printf("%f\n", avg_sum_ints(n));
    }
}

int main(void)
{
    test_avg_sum_ints();
    return 0;
}