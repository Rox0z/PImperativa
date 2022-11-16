#include <assert.h>
#include <stdio.h>

void return_print(const int *ar, int j, int total)
{
    printf("%d", total);
    for (int i = 0; i < j; i++)
        printf(" %d", ar[i]);
    printf("\n");
}

void sum_arrays(const int *a, int n)
{
    int ar[100] = {}, arr[100] = {}, total = 0;
    for (int i = 0; i < n; i++)
        (ar[i] = a[i] * a[i + 1 == n ? n - 1 : i + 1], arr[i] = a[i] + ar[i], total += arr[i]);

    return_print(arr, n, total);
}

void test(void)
{
    int x[100] = {}, i = 0;

    while (scanf("%d", &x[i]) != EOF)
        i++;

    sum_arrays(x, i);
}

void unit_test_sum_arrays(void)
{
    // int a0[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    // int a1[8] = {8, 7, 6, 5, 4, 3, 2, 1};
    // int a2[8] = {0, 0, 0, 0, 0, 1, 0, 0};
    // int a3[8] = {1, 1, 1, 1, 1, 0, 1, 1};
    // int a4[10] = {3, 4, 5, 3, 7, 2, 9, 3, 1, 6};

    // assert(sum_arrays(a0, 8) == 7);
    // assert(sum_arrays(a1, 8) == 7);
    // assert(sum_arrays(a2, 8) == 0);
    // assert(sum_arrays(a3, 8) == 1);
    // assert(sum_arrays(a4, 10) == 7);
}

int main(void)
{
    unit_test_sum_arrays();
    test();
    return 0;
}