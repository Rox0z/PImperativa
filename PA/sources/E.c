#include <stdio.h>
#include <assert.h>
#include "our_ints.h"

const char *author = "Leonardo Marinho Albudane";

int ints_take(const int *array, int size, int n, int *output)
{
    int res = 0;
    for (int i = 0; i < size; i++)
        i < n ? (output[res++] = array[i]) : 0;

    return res;
}

void test(void)
{
    int array[1000] = {}, take_array[1000] = {}, n = 0;

    int i = ints_get_until(-1, array);
    while (scanf("%d", &n) != EOF)
    {
        int result = ints_take(array, i, n, take_array);
        ints_println_special(take_array, result);
    }
}

void ints_take_unit_tests(void)
{
    int input[8] = {0, 1, 2, 3, 4, 5, 6, 7};
    int output[8] = {}, res = 0;

    res = ints_take(input, 2, 3, output);
    int output_res_1[2] = {0,1};
    for (int i = 0; i < 2; i++)
        assert(res == 2 && output[i] == output_res_1[i]);

    res = ints_take(input, 4, 3, output);
    int output_res_2[3] = {0, 1, 2};
    for (int i = 0; i < 3; i++)
        assert(res == 3 && output[i] == output_res_2[i]);

    res = ints_take(input, 6, 4, output);
    int output_res_3[4] = {0, 1, 2, 3};
    for (int i = 0; i < 4; i++)
        assert(res == 4 && output[i] == output_res_3[i]);

    res = ints_take(input, 8, 5, output);
    int output_res_4[5] = {0, 1, 2, 3, 4};
    for (int i = 0; i < 5; i++)
        assert(res == 5 && output[i] == output_res_4[i]);
}

int main(void)
{
    ints_take_unit_tests();
    test();
    return 0;
}