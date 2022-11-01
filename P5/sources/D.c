#include <stdio.h>

const char *author = "Leonardo Marinho Albudane";

int split(int value)
{
    int res = 0;
    while (value)
    {
        res += value % 10;
        value /= 10;
    }
    return res;
}

void test(void)
{
    int ar[20] = {};
    int i = 0;
    while (scanf("%d", &ar[i]) != EOF)
        i++;

    for (int j = 0; j < i; j++)
        printf("%d\n", split(ar[j]));
}

int main(void)
{
    test();
    return 0;
}