#include <stdio.h>

int main() // 0/1 knapsack problem
{
    int tests, empty, full, N, p[500], w[500], dp[10000];
    scanf("%d", &tests);

    while (tests--)
    {
        scanf("%d %d %d", &empty, &full, &N);

        for (int i = 0; i < N; ++i)
        {
            scanf("%d %d", &p[i], &w[i]);
        }

        full -= empty;
        dp[0] = 0;

        for (int i = 1; i <= full; ++i)
        {
            dp[i] = -1;

            for (int j = 0; j < N; ++j)
            {
                if ((i >= w[j] && dp[i - w[j]] != -1) && (dp[i] == -1 || p[j] + dp[i - w[j]] <= dp[i]))
                {
                    dp[i] = p[j] + dp[i - w[j]];
                }
            }
        }

        if (dp[full] == -1)
            printf("This is impossible.\n");
        else
            printf("The minimum amount of money in the piggy-bank is %d.\n", dp[full]);
    }

    return 0;
}