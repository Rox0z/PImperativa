#include <stdio.h>

const char *author = "Leonardo Marinho Albudane";

int split(int value, int res)
{
    return value == 0 ? res : split(value/10, res + (value % 10));
}

void test(void)
{
    int ar[20] = {};
    int i = 0;
    while (scanf("%d", &ar[i]) != EOF)
        i++;

    for (int j = 0; j < i; j++)
        printf("%d\n", split(ar[j], 0));
}

int main(void)
{
    test();
    return 0;
}