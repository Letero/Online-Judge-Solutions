class Solution
{
  public:
    int hammingWeight(uint32_t n)
    {
        int res = 0;
        for (int i = 0; i < sizeof(uint32_t) * 8; ++i)
        {
            if (1 & (n >> i))
                ++res;
        }
        return res;
    }
};