#include <stdio.h>
#include <math.h>

int min(int vp, int va, int io)
{
	int excedente = va - vp;
		return io 
        ? (excedente < 0) ? 0 : (excedente <= 30) ? 60 : (excedente <= 60) ? 120 : (excedente <= 80) ? 300 : (excedente > 80) ? 500 : 0
        : (excedente < 0) ? 0 : (excedente <= 20) ? 60 : (excedente <= 40) ? 120 : (excedente <= 60) ? 300 : (excedente > 60) ? 500 : 0;
}
int max(int vp, int va, int io)
{
	int excedente = va - vp;
	return io
        ? excedente < 0 ? 0 : excedente <= 30 ? 300 : excedente <= 60 ? 600 : excedente <= 80 ? 1500 : excedente > 80 ? 2500 : 0
        : excedente < 0 ? 0 : excedente <= 20 ? 300 : excedente <= 40 ? 600 : excedente <= 60 ? 1500 : excedente > 60 ? 2500 : 0;
}
double coima(double vp, double va, int io)
{
	double v = 1 + (0.25 * (va - vp)) / 10;
	double conta = vp == 0 && va == 0 ? 0 : ((vp/va) + v) * min(vp, va, io);
	return conta > max(vp, va, io) ? max(vp, va, io) : conta;
}


void test()
{
	int vp, va, io;
	while(scanf("%d%d%d", &vp, &va, &io) != EOF)
		printf("%.2f\n", coima(vp, va, io));
}


int main(void)
{
	test();
	return 0;
}