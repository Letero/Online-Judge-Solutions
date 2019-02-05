#include <vector>
#include <iostream>

int sum(const std::vector<int> numbers, int left, int right)
{
    int s = 0;
    for (int i = left; i <= right; ++i)
    {
        s += numbers[i];
    }
    return s;
}

int find_even_index(const std::vector<int> numbers)
{
    for (int i = 0; i < numbers.size(); ++i)
    {
        if (sum(numbers, 0, i) == sum(numbers, i, numbers.size() - 1))
        {
            return i;
        }
    }
    return -1;
}