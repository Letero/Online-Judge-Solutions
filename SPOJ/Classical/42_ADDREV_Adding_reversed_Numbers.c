#include <stdio.h>

unsigned int reverse(unsigned int value)
{
    unsigned int reversed = 0;
    while (value)
    {
        reversed = reversed * 10 + value % 10;
        value = value / 10;
    }

    return reversed;
}

int main(void)
{
    int tests;
    int a, b;
    scanf("%d", &tests);

    while (tests--)
    {
        scanf("%d%d", &a, &b);
        printf("%d\n", reverse(reverse(a) + reverse(b)));
    }

    return 0;
}