#include <stdio.h>
#include <assert.h>
#include "our_ints.h"

const char *author = "Leonardo Marinho Albudane";

int ints_less_than(const int *array, int size, int n, int *less_array)
{
    int res = 0;
    for (int i = 0; i < size; i++)
        n > array[i] ? (less_array[res++] = array[i]) : 0;
    return res;
}

void test(void)
{
    int array[1000] = {}, less_array[1000] = {}, n = 0;

    int i = ints_get_until(-1,array);
    while (scanf("%d", &n) != EOF)
    {
        int result = ints_less_than(array, i, n, less_array);
        ints_println_special(less_array, result);
    }
}

void ints_less_than_unit_tests(void)
{
    int input[8] = {0, 1, 2, 3, 4, 5, 6, 7};
    int output[8];

    int res_1 = ints_less_than(input, 3, 1, output);
    int output_res_1[1] = {0};
    for (int i = 0; i < 1; i++)
        assert(res_1 == 1 && output[i] == output_res_1[i]);

    int res_2 = ints_less_than(input, 4, 2, output);
    int output_res_2[2] = {0, 1};
    for (int i = 0; i < 2; i++)
        assert(res_2 == 2 && output[i] == output_res_2[i]);

    int res_3 = ints_less_than(input, 6, 3, output);
    int output_res_3[3] = {0, 1, 2};
    for (int i = 0; i < 3; i++)
        assert(res_3 == 3 && output[i] == output_res_3[i]);

    int res_4 = ints_less_than(input, 8, 4, output);
    int output_res_4[4] = {0, 1, 2, 3};
    for (int i = 0; i < 4; i++)
        assert(res_4 == 4 && output[i] == output_res_4[i]);
}

int main(void)
{
    ints_less_than_unit_tests();
    test();
    return 0;
}