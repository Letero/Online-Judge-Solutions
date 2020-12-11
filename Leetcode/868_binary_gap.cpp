class Solution
{
public:
    int binaryGap(int N)
    {
        int store[32]{0};
        int c = 0;
        for (int i = 0; i < sizeof(int) * 8; ++i)
        {
            if ((N >> i) & 1)
            {
                store[c++] = i;
            }
        }
        int max = 0;
        for (int i = 1; i < c; ++i)
        {
            if ((store[i] - store[i - 1]) > max)
            {
                max = store[i] - store[i - 1];
            }
        }
        return max;
    }
};