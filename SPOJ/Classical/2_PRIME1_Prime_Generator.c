#include <stdio.h>
#include <stdlib.h>

int isPrimeNumber(unsigned int n) // AKS primality test
{
    if (n < 2)
        return 0;
    if (n == 2)
        return 1;
    if (n == 3)
        return 1;
    if (n % 2 == 0)
        return 0;
    if (n % 3 == 0)
        return 0;

    int i = 5;
    int w = 2;

    while (i * i <= n)
    {
        if (n % i == 0)
        {
            return 0;
        }
        i += w;
        w = 6 - w;
    }
    return 1;
}

int main(int argc, char **argv)
{

    unsigned int testsNo;
    unsigned int left, right;

    scanf("%d", &testsNo);
    for (unsigned int i = 0; i < testsNo; i++)
    {
        scanf("%d%d", &left, &right);
        for (unsigned int j = left; j <= right; ++j)
        {
            if (isPrimeNumber(j))
            {
                printf("%d\n", j);
            }
        }
        puts("");
    }
    return 0;
}
