#include <assert.h>
#include <stdio.h>

int sum_positions_minus_odd_positions(const int *a, int n)
{
    int resultado = 0;
    for (int i = n, j = n % 2 ? n : n - 1; i >= 0; i--, j = j - 2 <= 0 ? 0 : j - 2)
    {
        // printf("array[%d] - %d | array[%d] - %d\n", i, a[i], j, j == 0 ? 0 : a[j]);
        (resultado += a[i], resultado -= j == 0 ? 0 : a[j]);
    }

    return resultado;
}

void test(void)
{
    int x[1000] = {}, i = 0;

    while (scanf("%d", &x[i]) != EOF)
        i++;
    printf("%d\n", sum_positions_minus_odd_positions(x, i - 1));
}

void unit_test_sum_positions_minus_odd_positions(void)
{
    int a0[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int a1[8] = {8, 7, 6, 5, 4, 3, 2, 1};
    int a2[8] = {0, 0, 0, 0, 0, 0, 0, 0};
    int a3[8] = {1, 1, 1, 1, 1, 1, 1, 1};
    int a4[10] = {3, 4, 5, 3, 7, 2, 9, 3, 1, 6};

    assert(sum_positions_minus_odd_positions(a0, 7) == 16);
    assert(sum_positions_minus_odd_positions(a1, 7) == 20);
    assert(sum_positions_minus_odd_positions(a2, 7) == 0);
    assert(sum_positions_minus_odd_positions(a3, 7) == 4);
    assert(sum_positions_minus_odd_positions(a4, 9) == 25);
}

int main(void)
{
    unit_test_sum_positions_minus_odd_positions();
    test();
    return 0;
}