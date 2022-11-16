#include <assert.h>
#include <stdio.h>

int sum_arrays_total(const int *a, int n)
{
    int ar[100] = {}, arr[100] = {}, total = 0;
    for (int i = 0; i < n; i++)
        (ar[i] = a[i] * a[i + 1 == n ? n - 1 : i + 1], arr[i] = a[i] + ar[i], total += arr[i]);

    return total;
}

int sum_arrays(const int *a, int n, int index)
{
    int ar[100] = {}, arr[100] = {};
    for (int i = 0; i < n; i++)
        (ar[i] = a[i] * a[i + 1 == n ? n - 1 : i + 1], arr[i] = a[i] + ar[i]);

    return arr[index];
}

void test(void)
{
    int x[100] = {}, i = 0;

    while (scanf("%d", &x[i]) != EOF)
        i++;

    printf("%d",sum_arrays_total(x, i));

    for (int j = 0; j < i; j++)
        printf(" %d", sum_arrays(x, i, j));
    printf("\n");
}

void unit_test_sum_arrays(void)
{
    int a0[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int a1[8] = {8, 7, 6, 5, 4, 3, 2, 1};
    int a2[8] = {0, 0, 0, 0, 0, 1, 0, 0};
    int a3[8] = {1, 1, 1, 1, 1, 0, 1, 1};
    int a4[10] = {3, 4, 5, 3, 7, 2, 9, 3, 1, 6};

    assert(sum_arrays_total(a0, 8) == 268);
    assert(sum_arrays_total(a1, 8) == 205);
    assert(sum_arrays_total(a2, 8) == 1);
    assert(sum_arrays_total(a3, 8) == 13);
    assert(sum_arrays_total(a4, 10) == 215);
}

int main(void)
{
    unit_test_sum_arrays();
    test();
    return 0;
}