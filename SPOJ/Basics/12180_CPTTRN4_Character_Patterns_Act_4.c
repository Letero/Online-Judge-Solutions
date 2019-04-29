#include <stdio.h>

int main(void)  
{
    int tests;
    scanf("%d", &tests);

    while (tests--)
    {
        int blocks, columns, height, width;
        scanf("%d%d%d%d", &blocks, &columns, &height, &width);

        for (int i = 0; i < blocks; ++i)
        {
            for (int j = 0; j < columns; ++j)
            {
                if (i == 0 || i == blocks)
                {
                    printf("*");
                }
            }
            puts("");
        }
    }

    return 0;
}
