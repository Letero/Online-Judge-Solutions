#include <stdio.h>
#include <math.h>

unsigned long long calculate(unsigned long long n)
{
    long long N = n, zerosCount = 0;
    while (n / 5 != 0)
    {
        zerosCount += n / 5;
        n = n / 5;
    }
    return zerosCount;
}

int main()
{
    unsigned long long tests, number;
    scanf("%lu", &tests);

    while (tests--)
    {
        scanf("%lu", &number);
        printf("%lu\n", calculate(number));
    }
    return 0;
}