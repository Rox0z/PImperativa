#include <stdio.h>
#include <math.h>

const char *author = "Leonardo Marinho Albudane";

int decimal(double n, int i)
{
    return n < 100 ? floor(n) * pow(10,i) : decimal(n/10, i+1);
}


void test(void)
{
    double n;
    while (scanf("%lf", &n) != EOF)
    {
        printf("%d\n", decimal(n, 0));
    }

}

int main(void)
{
    test();
    return 0;
}