#include <stdio.h>

const char *author = "Leonardo Marinho Albudane";

int unmerge(int *ar)
{
    int ip = 0, p = 0;
    for (int i = 0; i <= 19; i++)
        ar[i] % 2 == 0 ? (p += ar[i]) : (ip += ar[i]); 

    return (p - ip);
}

void test(void)
{
    int ar[20] = {};
    int i = 0;
    while (scanf("%d", &ar[i]) != EOF && i < 19)
        i++;

    printf("%d\n", unmerge(ar));
}

int main(void)
{
    test();
    return 0;
}