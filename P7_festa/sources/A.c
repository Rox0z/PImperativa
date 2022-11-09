#include <stdio.h>
#include <math.h>

const double latLisboaN = 38.72;
const double lonLisboaW = 9.14;

double fixDist(double dist)
{
    return (dist <= 1000) ? dist + (dist * 0.12) : (dist <= 3000) ? dist - (dist * 0.25) : dist + (dist * 0.18);
}

char* type(double dist)
{
    return (dist <= 1000) ? "VT" : (dist <= 3000) ? "VA" : "VM";
}

double distancia(double latOrigem, double lonOrigem)
{
    return sqrt((pow((latLisboaN - latOrigem), 2) + pow((lonLisboaW - lonOrigem), 2))) * 100;
}

void test(void)
{
    double lat = 0, lon = 0, dist = 0;
    while (scanf("%lf%lf", &lat, &lon) != EOF)
    {
        dist = distancia(lat, lon);
        printf("%.3f %s %.3f\n", dist, type(dist), fixDist(dist));
    }
}

int main(void)
{
    test();
    return 0;
}