#include <stdio.h>

const char *author = "Leonardo Marinho Albudane";

void minmax(double *ar, int size)
{
    double max = ar[0], min = ar[0];
    for (int i = 0; i < size; i++)
    {
        max = max < ar[i] ? ar[i] : max;
        min = min > ar[i] ? ar[i] : min;
    }    
    printf("%f\n%f\n%f\n", max, min, max-min);
}

void test(void)
{
    double ar[20] = {};
    int i = 0;
    while (scanf("%lf", &ar[i]) != EOF)
        i++;

    minmax(ar, i);
}

int main(void)
{
    test();
    return 0;
}