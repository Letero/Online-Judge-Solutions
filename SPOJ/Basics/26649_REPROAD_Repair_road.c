#include <stdio.h>
#include <stdlib.h>

int findConsecutiveOnes(int *array, int blocks)
{
    for (int j = 0; j < blocks; ++j)
    {
        printf("%d ", array[j]);
    }
    puts("");
    int theLongest = 0;
    int temp = 0;
    for (int i = 0; i < blocks; ++i)
    {
        if (array[i] == 1)
        {
            ++temp;
        }
        else if (array[i] == 0) // reset consecutive counter, save it if it is the longest one
        {
            if (temp > theLongest)
            {
                theLongest = temp;
            }
            temp = 0;
        }

        if (temp > theLongest) // edge case to check, if last element of array is 1
        {
            theLongest = temp;
        }
    }
    return theLongest;
}

void fillRoadWithBlocks(int *arr, int blocks, int money, int shift)
{
    for (int i = shift; i < blocks; ++i)
    {
        if (money)
        {
            if (arr[i] == 0)
            {
                arr[i] = 1;
                --money;
            }
        }
        else
        {
            break;
        }
    }
}

int *arrayCopy(int *arr, int size)
{
    int *newArr = (int *)malloc(sizeof(int) * size);
    for (int i = 0; i < size; ++i)
    {
        newArr[i] = arr[i];
    }

    return newArr;
}

int main(void)
{
    int tests, blocks, money, result = 0;
    scanf("%d", &tests);

    for (int i = 0; i < tests; ++i)
    {
        fflush(stdout);
        scanf("%d%d", &blocks, &money);
        printf("ITER = [%d], B: %d, M: %d\n", i, blocks, money);
        int array[blocks];
        for (int j = 0; j < blocks; ++j)
        {
            scanf("%d", &array[j]);
        }
        for (int j = 0; j < blocks; ++j)
        {
            int *tempArray = arrayCopy(array, blocks);
            fillRoadWithBlocks(tempArray, blocks, money, j);
            if (findConsecutiveOnes(tempArray, blocks) > result)
            {
                result = findConsecutiveOnes(tempArray, blocks);
            }
            free(tempArray);
        }
        printf("%d\n", result);
    }

    return 0;
}