#include <assert.h>
#include <stdio.h>

int ints_all_equal(const int *a, int n)
{
    int resultado = 1;
    for (int i = n; i >= 0; i--)
    {
        resultado = resultado ? a[i] == a[i - 1  < 0 ? 0 : i-1] : 0;
    }

    return resultado;
}

void test(void)
{
    int x[1000] = {}, i = 0;

    while (scanf("%d", &x[i]) != EOF)
        i++;
    printf("%d\n", ints_all_equal(x, i - 1));
}

void unit_test_ints_all_equal(void)
{
    int a0[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int a1[8] = {8, 7, 6, 5, 4, 3, 2, 1};
    int a2[8] = {0, 0, 0, 0, 0, 0, 0, 0};
    int a3[8] = {1, 1, 1, 1, 1, 1, 1, 1};
    int a4[10] = {3, 4, 5, 3, 7, 2, 9, 3, 1, 6};

    assert(ints_all_equal(a0, 7) == 0);
    assert(ints_all_equal(a1, 7) == 0);
    assert(ints_all_equal(a2, 7) == 1);
    assert(ints_all_equal(a3, 7) == 1);
    assert(ints_all_equal(a4, 9) == 0);
}

int main(void)
{
    unit_test_ints_all_equal();
    test();
    return 0;
}