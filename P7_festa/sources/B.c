#include <stdio.h>

const double simpleskwh = 0.23770;     // €
const double bi_hourlykwh_d = 0.26120; // €
const double bi_hourlykwh_n = 0.20620; // €

const double taxa = 0.25; // %
const double iva = 1.23;  // %

const double taxasimples = 15.903;   // €
const double taxabi_hourly = 18.551; // €

double simples(double consumokwh)
{
    double valor = consumokwh * simpleskwh;
    valor += (valor * taxa) + taxasimples;
    return valor * iva;
}

double bi_hourly(double consumokwh_d, double consumokwh_n)
{
    double valor_d = consumokwh_d * (bi_hourlykwh_d);
    double valor_n = consumokwh_n * (bi_hourlykwh_n);
    double total = valor_d + valor_n;

    total += (total * taxa) + taxabi_hourly;
    return total * iva;
}

void test(void)
{
    double consumokwh_d = 0, consumokwh_n = 0;
    while (scanf("%lf%lf", &consumokwh_d, &consumokwh_n) != EOF)
        printf("%.2f %.2f\n", simples(consumokwh_d + consumokwh_n), bi_hourly(consumokwh_d, consumokwh_n));
}

int main(void)
{
    test();
    return 0;
}