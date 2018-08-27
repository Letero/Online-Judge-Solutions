#include <stdio.h>

struct Money_t
{
    int value;
    int weight;
};

int getLowest(struct Money_t *money, int size, int piggyWeight)
{
    int min;
    for (int i = 0; i < size; ++i)
    {
        int temp = piggyWeight / money[i].weight;
        }
    return -1;
}

int main(void)
{
    int tests, empty, filled, coinsNo, value, weight;
    scanf("%d", &tests);

    while (tests--)
    {
        scanf("%d%d%d", &empty, &filled, &coinsNo);
        struct Money_t money[coinsNo];

        for (int i = 0; i < coinsNo; ++i)
        {
            scanf("%d%d", &money[i].value, &money[i].weight);
        }
        int result = getLowest(money, coinsNo, filled - empty);

        if (result > 0)
        {
            printf("The minimum amount of money in the piggy bank is %d.\n", result);
        }
        else
            printf("This is impossible.\n");
    }

    return 0;
}