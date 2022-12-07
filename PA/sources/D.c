#include <stdio.h>
#include <assert.h>
#include "our_ints.h"

const char *author = "Leonardo Marinho Albudane";

int ints_append(const int *array_A, int size_A, const int *array_B, int size_B, int *array_C)
{
    for (int i = 0; i < (size_A + size_B); i++)
        array_C[i] = i < size_A ? array_A[i] : array_B[i-size_A];

    return size_A + size_B;
}

void test(void)
{
    int array_A[1000] = {}, array_B[1000] = {}, array_C[1000] = {}, n = 0;

    int size_A = ints_get_until(-1, array_A);
    int size_B = ints_get_until(-1, array_B);
    n = ints_append(array_A, size_A, array_B, size_B, array_C);
    ints_println_special(array_C, n);
    n = ints_append(array_B, size_B, array_A, size_A, array_C);
    ints_println_special(array_C, n);
}

void ints_append_unit_tests(void)
{
    int input_A[8] = {0, 1, 2, 3, 4, 5, 6, 7};
    int input_B[8] = {7, 6, 5, 4, 3, 2, 1, 0};
    int output[16] = {}, res = 0;

    res = ints_append(input_A, 2, input_B, 2, output);
    int output_res_1[4] = {0, 1, 7, 6};
    for (int i = 0; i < 4; i++)
        assert(res == 4 && output[i] == output_res_1[i]);

    res = ints_append(input_A, 4, input_B, 4, output);
    int output_res_2[8] = {0, 1, 2, 3, 7, 6, 5, 4};
    for (int i = 0; i < 8; i++)
        assert(res == 8 && output[i] == output_res_2[i]);

    res = ints_append(input_A, 6, input_B, 6, output);
    int output_res_3[12] = {0, 1, 2, 3, 4, 5, 7, 6, 5, 4, 3, 2};
    for (int i = 0; i < 12; i++)
        assert(res == 12 && output[i] == output_res_3[i]);

    res = ints_append(input_A, 8, input_B, 8, output);
    int output_res_4[16] = {0, 1, 2, 3, 4, 5, 6, 7, 7, 6, 5, 4, 3, 2, 1, 0};
    for (int i = 0; i < 16; i++)
        assert(res == 16 && output[i] == output_res_4[i]);
}

int main(void)
{
    ints_append_unit_tests();
    test();
    return 0;
}