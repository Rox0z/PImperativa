#include <assert.h>
#include <stdio.h>

int ints_second_max(const int *a, int n)
{
    int max = 0, second_max=0;
    for (int i = 0; i < n; i++)
        a[i] > max ? (second_max = max, max = a[i]) : a[i] != max && a[i] > second_max ? (second_max = a[i]) : 0;
    
    return second_max;
}

void test(void)
{
    int x[100] = {}, i = 0;

    while (scanf("%d", &x[i]) != EOF)
        i++;
    printf("%d\n", ints_second_max(x, i));
}

void unit_test_ints_second_max(void)
{
    int a0[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int a1[8] = {8, 7, 6, 5, 4, 3, 2, 1};
    int a2[8] = {0, 0, 0, 0, 0, 1, 0, 0};
    int a3[8] = {1, 1, 1, 1, 1, 0, 1, 1};
    int a4[10] = {3, 4, 5, 3, 7, 2, 9, 3, 1, 6};

    assert(ints_second_max(a0, 8) == 7);
    assert(ints_second_max(a1, 8) == 7);
    assert(ints_second_max(a2, 8) == 0);
    assert(ints_second_max(a3, 8) == 0);
    assert(ints_second_max(a4, 10) == 7);
}

int main(void)
{
    unit_test_ints_second_max();
    test();
    return 0;
}