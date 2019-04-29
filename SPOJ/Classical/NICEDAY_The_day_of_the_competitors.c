#include <stdio.h>

struct Contests
{
    int a;
    int b;
    int c;
    int sum;
};

int main(void)
{
    int tests;
    scanf("%d", &tests);

    while (tests--)
    {
        int no;
        scanf("%d", &no);
        struct Contests arr[no];
        int min;
        int res = 0;
        for (int i = 0; i < no; ++i)
        {
            scanf("%d%d%d", &arr[i].a, &arr[i].b, &arr[i].c);
            arr[i].sum = arr[i].a + arr[i].b + arr[i].c;
            if (i == 0)
            {
                min = arr[i].sum;
            }
            else
            {
                if (arr[i].sum < min)
                {
                    min = arr[i].sum;
                }
            }
        }

        for (int i = 0; i < no; ++i)
        {
            if (arr[i].sum == min)
            {
                res++;
            }
        }
        printf("%d\n", res);
    }

    return 0;
}