#include <stdio.h>

int main(void) //REMEMBER TO FINISH THIS LATER
{
    int tests;
    int tuplesNo;
    char tuplesHolder[100][7]; // [100] - number of tuples, [7] - 6tuple + \0
    char alphabet[65];
    scanf("%d", &tests);
    for (int i = 0; i < tests; ++i)
    {
        scanf("%d", &tuplesNo);
        for (int j = 0; j < tuplesNo; ++j)
        {
            scanf("%s", &tuplesHolder[j]);
        }
        scanf("%s", &alphabet);
    }

    return 0;
}