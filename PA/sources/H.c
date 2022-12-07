#include <stdio.h>
#include <assert.h>
#include "our_ints.h"

const char *author = "Leonardo Marinho Albudane";

int ints_accumulate(const int *array, int size, int *output)
{
    int res = 0, sum = 0;
    for (int i = 0; i <= size; i++)
        i ? (sum += array[i-1], output[res++] = sum) : (output[res++] = sum);

    return res;
}

void test(void)
{
    int array[1000] = {}, accumulate_array[1000] = {};

    int i = ints_get_until(-1, array);
    int result = ints_accumulate(array, i, accumulate_array);
    ints_println_special(accumulate_array, result);
}

void ints_accumulate_unit_tests(void)
{
    int input[8] = {0, 1, 2, 3, 4, 5, 6, 7};
    int output[9] = {}, res = 0;

    res = ints_accumulate(input, 2, output);
    int output_res_1[3] = {0, 0, 1};
    for (int i = 0; i < 3; i++)
        assert(res == 3 && output[i] == output_res_1[i]);

    res = ints_accumulate(input, 4, output);
    int output_res_2[5] = {0, 0, 1, 3, 6};
    for (int i = 0; i < 5; i++)
        assert(res == 5 && output[i] == output_res_2[i]);

    res = ints_accumulate(input, 6, output);
    int output_res_3[7] = {0, 0, 1, 3, 6, 10, 15};
    for (int i = 0; i < 7; i++)
        assert(res == 7 && output[i] == output_res_3[i]);

    res = ints_accumulate(input, 8, output);
    int output_res_4[9] = {0, 0, 1, 3, 6, 10, 15, 21, 28};
    for (int i = 0; i < 9; i++)
        assert(res == 9 && output[i] == output_res_4[i]);
}

int main(void)
{
    ints_accumulate_unit_tests();
    test();
    return 0;
}