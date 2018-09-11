#include <stdio.h>
#include <string.h>

char string[100]; // if declared here, It will go to Data segment of memory. Therefor, it is initialized with 0's

int main(int argc, char argv[])
{
    int tests;
    scanf("%d", &tests);

    while (tests--)
    {
        scanf("%s", string);

        for (int i = 0; i < strlen(string) / 2; i = i + 2)
        {
            printf("%c", string[i]);
        }
        puts("");
    }

    return 0;
}