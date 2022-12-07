#include <stdio.h>
#include <assert.h>
#include "our_ints.h"

const char *author = "Leonardo Marinho Albudane";

int ints_accumulate(const int *array, int size, int *output)
{
    int res = 0;
    for (int i = 0; i < size; i++){
        i ? ( output[res++] = array[i+1]-array[i]) : (output[res++] = array[i+1]);
}
    return res-1;
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
    int input[9] = {0, 0, 1, 3, 6, 10, 15, 21, 28};
    int output[8] = {}, res = 0;

    res = ints_accumulate(input, 3, output);
    int output_res_1[2] = {0, 1};
    for (int i = 0; i < 2; i++)
        assert(res == 2 && output[i] == output_res_1[i]);

    res = ints_accumulate(input, 5, output);
    int output_res_2[4] = {0, 1, 2, 3};
    for (int i = 0; i < 4; i++)
        assert(res == 4 && output[i] == output_res_2[i]);

    res = ints_accumulate(input, 7, output);
    int output_res_3[6] = {0, 1, 2, 3, 4, 5};
    for (int i = 0; i < 6; i++)
        assert(res == 6 && output[i] == output_res_3[i]);

    res = ints_accumulate(input, 9, output);
    int output_res_4[8] = {0, 1, 2, 3, 4, 5, 6, 7};
    for (int i = 0; i < 8; i++)
        assert(res == 8 && output[i] == output_res_4[i]);
}

int main(void)
{
    ints_accumulate_unit_tests();
    test();
    return 0;
}