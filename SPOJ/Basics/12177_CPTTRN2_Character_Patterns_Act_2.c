#include <stdio.h>

int main(void)
{
    int tests;
    scanf("%d", &tests);

    while (tests--)
    {
        int lines, characters;
        scanf("%d%d", &lines, &characters);

        for (int i = 0; i < lines; ++i)
        {
            if (i == 0 || (i == lines - 1))
            {
                for (int j = 0; j < characters; ++j)
                {
                    printf("*");
                }
                puts("");
            }
            else
            {
                for (int j = 0; j < characters; ++j)
                {
                    if (j == 0 || (j == characters - 1))
                    {
                        printf("*");
                    }
                    else
                    {
                        printf(".");
                    }
                }
                puts("");
            }
        }
        puts("");
    }

    return 0;
}