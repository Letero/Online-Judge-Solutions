#include <stdio.h>

int main(void) // result 162
{
    int tests;
    int sum = 0;
    scanf("%d", &tests);

    while (tests--)
    {
        int value;
        scanf("%d", &value);
        if (value > 0)
        {
            sum += value;
        }
    }
    printf("%d", sum);

    return 0;
}