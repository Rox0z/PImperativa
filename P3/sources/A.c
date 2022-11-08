#include <stdio.h>

const char *author = "Leonardo Albudane";

const double ETH = 1449.87;
const double XMR = 146.78;
const double LTC = 55.86;

void etherum(double val)
{
    printf("%.2f\n%.3f\n", val*ETH, (val*1.02)*ETH);
}

void monero(double val)
{
    printf("%.2f\n%.3f\n", val*XMR, (val*1.02)*XMR);
}

void litecoin(double val)
{
    printf("%.2f\n%.3f\n", val*LTC, (val*1.02)*LTC);
}

void exchange(int coin, double val) {
    coin == 1 ? etherum(val)
    : coin == 2 ? monero(val)
    : coin == 3 ? litecoin(val) : 0;
}

void test_bitcoin(void)
{

    int coin;
    double val;
    while(scanf("%d%lf", &coin, &val) != EOF)
    {
        exchange(coin, val);
    }
}

int main(void)
{
    test_bitcoin();
    return 0;
}