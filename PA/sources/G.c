#include <stdio.h>
#include <assert.h>
#include "our_ints.h"

const char *author = "Leonardo Marinho Albudane";

int ints_ascending(const int *array, int size, int *output)
{
    int res = 0;
    for (int i = 0; i < size; i++)
        i ? output[res - 1] <= array[i] ? (output[res++] = array[i]) : 0 : (output[res++] = array[i]);
    return res;
}

void test(void)
{
    int array[1000] = {}, ascending_array[1000] = {};

    int i = ints_get_until(-1, array);
    int result = ints_ascending(array, i, ascending_array);
    ints_println_special(ascending_array, result);
}

void ints_ascending_unit_tests(void)
{
    int input_A[8] = {0, 1, 2, 3, 4, 5, 6, 7};
    int input_B[8] = {7, 6, 5, 4, 3, 2, 1, 0};
    int input_C[8] = {1, 3, 6, 9, 9, 6, 3, 1};
    int input_D[16] = {4, 3, 2, 4, 5, 3, 7, 0, 5, 9, 1, 5, 10, 9, 11, 3};
    int output[16] = {}, res = 0;

    res = ints_ascending(input_A, 8, output);
    int output_res_1[8] = {0, 1, 2, 3, 4, 5, 6, 7};
    for (int i = 0; i < 8; i++)
        assert(res == 8 && output[i] == output_res_1[i]);

    res = ints_ascending(input_B, 8, output);
    int output_res_2[1] = {7};
    for (int i = 0; i < 1; i++)
        assert(res == 1 && output[i] == output_res_2[i]);

    res = ints_ascending(input_C, 8, output);
    int output_res_3[5] = {1, 3, 6, 9, 9};
    for (int i = 0; i < 5; i++)
        assert(res == 5 && output[i] == output_res_3[i]);

    res = ints_ascending(input_D, 16, output);
    int output_res_4[7] = {4, 4, 5, 7, 9, 10, 11};
    for (int i = 0; i < 7; i++)
        assert(res == 7 && output[i] == output_res_4[i]);
}

int main(void)
{
    ints_ascending_unit_tests();
    test();
    return 0;
}