#include <assert.h>
#include <stdio.h>

int sum_positions_minus_odd_positions(const int *array, int total)
{
    int sum_odd_positions = 0;
    int sum_total = 0;
    for (int i = 0; i < total; i++)
    {
        sum_total += array[i];
        if (i % 2 == 1)
        {
            sum_odd_positions += array[i];
        }
    }

    return sum_total - sum_odd_positions;
}

void teste(void)
{
    int array[1000] = {};
    int i = 0;

    while (scanf("%d", &array[i]) != EOF)
        i++;

    printf("%d\n", sum_positions_minus_odd_positions(array, i));
}

void unit_test_sum_positions_minus_odd_positions(void)
{
    int input[8] = {0, 1, 2, 3, 4, 5, 6, 7};
    assert(sum_positions_minus_odd_positions(input, 8) == 12);
}

int main(void)
{
    unit_test_sum_positions_minus_odd_positions();
    teste();
    return 0;
}