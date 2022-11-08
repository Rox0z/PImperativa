#include <stdio.h>

const char *author = "Leonardo Albudane";

int mesas(int q)
{
    return q == 0 ? 0 : (q * 4) + 2;
}

int dias(int d)
{
    return d > 7 ? dias(d - 7) : d;
}

void test_dias_mesas(void)
{
    int o, n;
    while (scanf("%d%d", &o, &n) != EOF)
    {
        printf("%d\n", o == 1 ? dias(n) : mesas(n));
    }
}
int main(void)
{

    test_dias_mesas();
    return 0;
}