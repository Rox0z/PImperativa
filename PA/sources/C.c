#include <stdio.h>
#include <assert.h>
#include "our_ints.h"

const char *author = "Leonardo Marinho Albudane";

// P5
int split(int value, int res)
{
    return value == 0 ? res : split(value / 10, res + (value % 10));
}

void digits_sums(const int *array, int size, int *sum_array)
{
    for (int i = 0; i < size; i++)
        sum_array[i] = split(array[i], 0);
}

void test(void)
{
    int array[1000] = {}, sum_array[1000] = {};

    int i = ints_get_until(-1, array);
    digits_sums(array, i, sum_array);
    ints_println_special(sum_array, i);
}

void digits_sums_unit_tests(void)
{
    int input[8] = {10, 11, 12, 23, 24, 25, 36, 37};
    int output[8];

    digits_sums(input, 3, output);
    int output_res_1[3] = {1, 2, 3};
    for (int i = 0; i < 3; i++)
        assert(output[i] == output_res_1[i]);

    digits_sums(input, 4, output);
    int output_res_2[4] = {1, 2, 3, 5};
    for (int i = 0; i < 4; i++)
        assert(output[i] == output_res_2[i]);

    digits_sums(input, 6, output);
    int output_res_3[6] = {1, 2, 3, 5, 6, 7};
    for (int i = 0; i < 6; i++)
        assert(output[i] == output_res_3[i]);

    digits_sums(input, 8, output);
    int output_res_4[8] = {1, 2, 3, 5, 6, 7, 9, 10};
    for (int i = 0; i < 8; i++)
        assert(output[i] == output_res_4[i]);
}

int main(void)
{
    digits_sums_unit_tests();
    test();
    return 0;
}