#include <stdio.h>

int main(void)
{
    int tests;
    scanf("%d", &tests);
    while (tests--)
    {
        int n;
        scanf("%d", &n);
        int answer[1000] = {1};
        int m = 0; // amount of numbers stored in array
        int carry = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j <= m; j++)
            {
                answer[j] = (answer[j] * i) + carry;
                printf("a[j] = %d\n", answer[j]);
                carry = answer[j] / 10;
                printf("carry = %d\n", carry);
                answer[j] = answer[j] % 10;
                printf("2x a[j] = %d\n", answer[j]);
            }
            while (carry)
            {
                m++;
                answer[m] = carry % 10;
                carry /= 10;
                printf("a[m] = %d\n", answer[m]);
            }
        }

        for (int i = m; i >= 0; i--) // print from rear end - m stores how many numbers are saved in array
        {
            printf("%d", answer[i]);
        }
        printf("\n");
    }
    return 0;
}