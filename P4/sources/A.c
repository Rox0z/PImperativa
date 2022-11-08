#include <stdio.h>
#include <math.h>

const char *author = "Leonardo Marinho Albudane";

const double promo_sml = 0.10;
const double promo_total = 0.15;

double smlF(double base, int sml)
{
	return sml == 0 ? sml : ((base - (base * promo_sml)) - base * promo_total) + smlF(base, sml - 1);
}

double xlxxlF(double base, int xlxxl)
{
	return xlxxl == 0 ? xlxxl : (base - base * promo_total) + xlxxlF(base, xlxxl - 1);
}

double promo(double base, int sml, int xxl)
{
	int total = sml + xxl;
	int promo_off = (sml + xxl) / 3;
	promo_off < sml ? (sml -= promo_off) : (promo_off -= sml, sml = 0, xxl -= promo_off);
	return (smlF(base, sml) + xlxxlF(base, xxl)) / total;
}

void test(void)
{
	double base;
	int sml;
	int xlxxl;
	while ((scanf("%lf%d%d", &base, &sml, &xlxxl)) != EOF)
		printf("%f\n", (round(promo(base, sml, xlxxl) * 100) / 100));
}
int main()
{
	test();
	return 0;
}