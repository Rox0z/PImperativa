#include <stdio.h>

const char *author = "Leonardo Albudane";

int blue(int w, int h)
{
    int res = 0;
    for (int i = 1; i <= w; i++)
    {
        res += i % 2 == 1 ? i > h ? h : (i * 2) - 1 : 0;
    }
    return res;
}

int yellow(int w, int h)
{
    int res = 0;
    for (int i = 1; i <= w; i++)
    {
        res += i % 2 == 0 ? i > h ? h : (i * 2) - 1 : 0;
    }
    return res;
}

void test_azuleijos(void)
{
    int w, h;
    while (scanf("%d%d", &w, &h) != EOF)
    {
        printf("%d %d\n", blue(w, h), yellow(w, h));
    }
}

int main(void)
{
    test_azuleijos();
    return 0;
}