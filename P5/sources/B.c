#include <stdio.h>

const char *author = "Leonardo Marinho Albudane";

void reverse(int *ar, int size)
{
    int temp = 0;
    for (int i = 0; i < size/2; i++)
    {
        temp = ar[size - i];
        ar[size - i] = ar[i];
        ar[i] = temp;
    }

    for (int j = 0; j < size+1; j++)
        printf("%d\n", ar[j]);
}

// 0 1
// 1 2
// 2 3
// 3 4

// temp = ar[3-0] (4)
// ar[3-0] (4) = ar[0] (1)
// ar[0] (1) = temp (4)

// 0 4
// 1 2
// 2 3
// 3 1

// temp = ar[3-1] (3)
// ar[3-1] (3) = ar[1] (2)
// ar[1] (2) = temp (3)

// 0 4
// 1 3
// 2 2
// 3 1

void test(void)
{
    int ar[20] = {};
    int i = 0;
    while (scanf("%d", &ar[i]) != EOF && i < 19)
        i++;

    reverse(ar, i-1);
}

int main(void)
{
    test();
    return 0;
}