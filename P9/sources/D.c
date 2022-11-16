#include <assert.h>
#include <stdio.h>

int max_value(const int *a, int n, int max)
{
    return n < 0 ? max : a[n] > max ? max_value(a, n - 1, a[n])
                                    : max_value(a, n - 1, max);
}

void return_print(const int *ar, int j)
{
    printf("%d", j);
    for (int i = 0; i < j; i++)
        printf(" %d", ar[i]);
    printf("\n");
}

int ints_argsmax(const int *a, int n)
{
    int ar[100] = {}, j = 0, max = max_value(a, n - 1, 0);
    for (int i = 0; i < n; i++)
        a[i] == max ? (ar[j] = i, j++) : 0;

    return_print(ar, j);
    return ar[0];
}

void test(void)
{
    int x[100] = {}, i = 0;

    while (scanf("%d", &x[i]) != EOF)
        i++;
    ints_argsmax(x, i);
}

void unit_test_ints_argsmax(void)
{
    // int a0[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    // int a1[8] = {8, 7, 6, 5, 4, 3, 2, 1};
    // int a2[8] = {0, 0, 0, 0, 0, 1, 0, 0};
    // int a3[8] = {1, 1, 1, 1, 1, 0, 1, 1};
    // int a4[10] = {3, 4, 5, 9, 7, 2, 9, 3, 1, 6};

    // assert(ints_argsmax(a0, 8) == 7);
    // assert(ints_argsmax(a1, 8) == 0);
    // assert(ints_argsmax(a2, 8) == 5);
    // assert(ints_argsmax(a3, 8) == 0);
    // assert(ints_argsmax(a4, 10) == 3);
}

int main(void)
{
    unit_test_ints_argsmax();
    test();
    return 0;
}