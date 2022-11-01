#include <stdio.h>

const char *author = "Leonardo Marinho Albudane";

void minmax(double *ar, int size)
{
    int max = 0, min = 0;
    for (int i = 0; i < size; i++)
    {
        max = ar[max] < ar[i] ? i : max;
        min = ar[min] > ar[i] ? i : min;
    }    
    printf("%d\n%d\n%f\n", max, min, ar[max]+ar[min]);
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