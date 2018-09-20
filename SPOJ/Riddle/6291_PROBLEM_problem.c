#include <stdio.h>
#include <string.h>

int main(void)
{
    int tests;
    scanf("%d", &tests);

    while (tests--)
    {
        char string[100];
        int res = 0;
        scanf("%s", string);

        for (int i = 0; i < strlen(string); ++i)
        {
            switch (string[i])
            {
            case '0':
            case '6':
            case '9':
                ++res;
                break;
            case '8':
                res += 2;
                break;
            }
        }
        printf("%d\n", res);
    }

    return 0;
}