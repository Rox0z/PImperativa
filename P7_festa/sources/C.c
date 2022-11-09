#include <stdio.h>

int points(const int *contests, int n)
{
    int total = 0;
    for (int i = 0; i < n / 2; i++)
    {
        total += contests[(n / 2) + i] ? (contests[(n / 2) + i] >= ((contests[i] % 2 ? contests[i] + 1 : contests[i]) / 2)) ? (contests[(n / 2) + i] * 3) + 1 : (contests[(n / 2) + i] * 3) : 0;
    }
    return total;
}

void test(void)
{
    int contests[1000] = {}, i = 0;
    while (scanf("%d", &contests[i]) != EOF)
        i++;

    printf("%d\n", points(contests, i));
}

int main(void)
{
    test();
    return 0;
}