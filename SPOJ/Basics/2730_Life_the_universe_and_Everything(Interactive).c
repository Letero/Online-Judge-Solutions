#include <stdio.h>

int main(void)
{
    int n;

    for (;;)
    {
        fflush(stdout);
        scanf("%d", &n);
        printf("%d\n", n);

        if (42 == n)
        {
            break;
        }
    }

    return 0;
}