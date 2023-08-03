#include <stdio.h>
#include <assert.h>
#include "our_ints.h"
#include "our_doubles.h"

const char *author = "Leonardo Marinho Albudane";

void dsort_array(double *a, int s)
{
    for (int i = 1; i < s; i++)
    {
        int j = i;
        while (j > 0 && a[j - 1] > a[j])
        {
            double m = a[j - 1];
            a[j - 1] = a[j];
            a[j] = m;
            j--;
        }
    }
}

// ---------------------------------------------Problem A--------------------------------------------- //
double avg_km(double *array, int size)
{
    double sum = 0;
    for (int i = 0; i < size; i++)
        sum += array[i];
    return sum / size;
}

double mode_km(double *km, int n)
{
    double mode = 0;
    int aparicoes = 0, mais_aparicoes = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(km[i] == km[j])
                aparicoes++;
        }
        if (aparicoes > mais_aparicoes)
        {
            mode = km[i];
            mais_aparicoes = aparicoes;
        }
        aparicoes = 0;
    }
    return mode;
}

double med_km(double *array, int size)
{
    return size % 2 ? array[(size / 2)] : (array[(size / 2) - 1] + array[(size / 2)]) / 2;
}

double all_mass(double *start, int start_size, double *end, int end_size)
{
    double total = 0;
    for (int i = 0; i < (start_size + end_size) / 2; i++)
        total += start[i] - end[i];
    return total;
}

int split(double *array, int size, int start, int step, double *new_array)
{
    int j = 0;
    for (int i = start; i < size; i += step)
        new_array[j++] = array[i];
    return j;
}

void test_worldcup(void)
{
    double array[1000] = {};
    double km_a[1000] = {}, skg_a[1000] = {}, ekg_a[1000] = {};

    int ar_size = doubles_get(array);

    int km_size = split(array, ar_size, 0, 3, km_a);
    int skg_size = split(array, ar_size, 1, 3, skg_a);
    int ekg_size = split(array, ar_size, 2, 3, ekg_a);

    dsort_array(km_a, km_size);

    double avg = avg_km(km_a, km_size);
    double mode = mode_km(km_a, km_size);
    double med = med_km(km_a, km_size);
    
    double total_mass = all_mass(skg_a, skg_size, ekg_a, ekg_size);

    printf("%.2f %.2f %.2f %.2f\n", avg, mode, med, total_mass);
}

// ---------------------------------------------Problem B--------------------------------------------- //
// int program_B()
// {
// }

// void test_B(void)
// {
// }

// ---------------------------------------------Problem C--------------------------------------------- //
void password(char *str, char *out)
{
    for (int i = 0, j = 0; str[i] != '\0'; i++)
    {
        if (str[i + 1] != '_' && str[i] == '_')
        {
            out[j] = str[i + 1];
            out[j + 1] = i + 1 % 10;
            out[j + 2] = '\0';
            j += 2;
        }
    }
    printf("%s\n", out);
}

void test_C(void)
{
    char string[1000] = {}, output[1000] = {};
    while (scanf("%s", string) != EOF)
        (password(string, output), printf("%s\n", output));
}

// ---------------------------------------------Unit Test--------------------------------------------- //

void unit_tests()
{
    double s[8] = {4, 2, 2, 5, 6, 2, 4, 7};
    double r[8] = {2, 2, 2, 4, 4, 5, 6, 7};
    dsort_array(s, 8);

    for (int i = 0; i < 8; i++)
        assert(s[i] == r[i]);

    assert(avg_km(s, 8) == 4);
    assert(med_km(s, 8) == 4);
    assert(mode_km(s, 8) == 2);
    assert(all_mass(s, 8, s, 8) == 0);
}

int main(int argc, char **argv)
{
    unit_tests();
    int x = 'A';
    if (argc > 1)
        x = *argv[1];

    switch (x)
    {
    case 'A':
        test_worldcup();
        break;
    // case 'B':
    //     test_B();
    //     break;
    case 'C':
        test_C();
        break;
    default:
        printf("%s: Invalid option.\n", argv[1]);
        break;
    }
    return 0;
}