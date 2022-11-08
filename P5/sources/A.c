#include <stdio.h>

int pares_impares(int *array)
{
    int impares = 0; 
    int pares = 0;
    for (int i = 0; i <= 19; i++)
    {
        if (array[i] % 2 == 0)
        {
            pares = pares + array[i];
        } 
        else 
        {
            impares = impares + array[i];
        }
    }

    return pares - impares;
}

void test_pares_impares(void)
{
    int array[20] = {};
    int i = 0;
    while (scanf("%d", &array[i]) != EOF)
    {
        i++;
    }

    printf("%d\n", pares_impares(array));
}

int main(void)
{
    test_pares_impares();
    return 0;
}