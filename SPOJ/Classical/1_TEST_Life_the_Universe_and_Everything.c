#include <stdio.h>

int main(void)
{
    int val;
    for (;;)
    {
        scanf("%d", &val);
        if (val == 42)
        {
            break;
        }
        printf("%d\n", val);
    }
    return 0;
}