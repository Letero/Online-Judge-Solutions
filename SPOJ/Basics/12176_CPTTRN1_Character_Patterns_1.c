#include <stdio.h>

int main(void)
{
    int tests;
    scanf("%d", &tests);

    while (tests--)
    {
        int lines;
        int characters;
        scanf("%d%d", &lines, &characters);
        for (int i = 0; i < lines; ++i)
        {
            for (int j = 0; j < characters; ++j)
            {
                if ((i + j) == 0)
                {
                    printf("*");
                }
                else
                {
                    if ((i + j) % 2)
                    {
                        printf(".");
                    }
                    else
                    {
                        printf("*");
                    }
                }
            }
            puts("");
        }
        puts("");
    }
    return 0;
}