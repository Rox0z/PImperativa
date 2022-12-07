#include <stdio.h>
#include <assert.h>
#include "our_ints.h"

const char *author = "Leonardo Marinho Albudane";

int ints_drop(const int *array, int size, int n, int *output)
{
    if (n >= 0)
    {
        if (n < size)
        {
            for (int i = n, j = 0; i < size; i++, j++)
                output[j] = array[i];
        }
    }
    else
    {
        for (int i = 0; i < size; i++)
            output[i] = array[i];
    }
    return n > size ? 0 : n < 0 ? size
                                : size - n;
}

void test(void)
{
    int array[1000] = {}, drop_array[1000] = {}, n = 0;

    int i = ints_get_until(-1, array);
    while (scanf("%d", &n) != EOF)
    {
        int result = ints_drop(array, i, n, drop_array);
        ints_println_special(drop_array, result);
    }
}

void ints_drop_unit_tests(void)
{
    int input[8] = {0, 1, 2, 3, 4, 5, 6, 7};
    int output[8] = {}, res = 0;

    res = ints_drop(input, 2, 3, output);
    int output_res_1[2] = {};
    for (int i = 0; i < 2; i++)
        assert(res == 0 && output[i] == output_res_1[i]);

    res = ints_drop(input, 4, 3, output);
    int output_res_2[1] = {3};
    for (int i = 0; i < 1; i++)
        assert(res == 1 && output[i] == output_res_2[i]);

    res = ints_drop(input, 6, 4, output);
    int output_res_3[2] = {4, 5};
    for (int i = 0; i < 2; i++)
        assert(res == 2 && output[i] == output_res_3[i]);

    res = ints_drop(input, 8, -1, output);
    int output_res_4[8] = {0, 1, 2, 3, 4, 5, 6, 7};
    for (int i = 0; i < 8; i++)
        assert(res == 8 && output[i] == output_res_4[i]);
}

int main(void)
{
    ints_drop_unit_tests();
    test();
    return 0;
}