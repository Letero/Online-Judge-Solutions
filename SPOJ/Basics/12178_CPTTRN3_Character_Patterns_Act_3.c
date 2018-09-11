#include <stdio.h>

int main(void)
{
    unsigned int tests;
    scanf("%d", &tests);

    while (tests--)
    {
        unsigned int lines, characters;
        scanf("%d%d", &lines, &characters);
        for (unsigned int i = 0; i < lines * 4 - (lines - 1); ++i)
        {
            for (unsigned int j = 0; j < characters * 3 + 1; ++j)
            {
                if (i == 0 || (i % 3 == 0))
                {
                    printf("*");
                }
                else if (j == 0 || (j % 3 == 0))
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
        puts("");
    }

    return 0;
}