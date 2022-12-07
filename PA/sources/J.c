#include <stdio.h>
#include <assert.h>
#include "our_ints.h"

const char *author = "Leonardo Marinho Albudane";

int ints_find_triple(const int *array, int size)
{
    int res = -1;
    for (int i = 0; i < size - 2; i++)
        res = res == -1 ? array[i] == array[i + 1] && array[i] == array[i + 2] ? i : -1 : res;
    return res;
}

void test(void)
{
    int array[1000] = {};

    int i = ints_get_until(-1, array);
    printf("%d\n", ints_find_triple(array, i));
}

void ints_find_triple_unit_tests(void)
{
    int input_A[8] = {0, 1, 2, 2, 2, 3, 4, 5};
    int input_B[8] = {0, 1, 2, 3, 4, 5, 5, 5};
    int input_C[8] = {0, 0, 0, 1, 2, 3, 4, 5};
    int input_D[10] = {0, 1, 2, 3, 4, 5, 6, 7, 7, 7};

    assert(ints_find_triple(input_A, 8) == 2);

    assert(ints_find_triple(input_B, 8) == 5);

    assert(ints_find_triple(input_C, 8) == 0);

    assert(ints_find_triple(input_D, 8) == -1);
}

int main(void)
{
    ints_find_triple_unit_tests();
    test();
    return 0;
}