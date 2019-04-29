//https://leetcode.com/problems/max-consecutive-ones/submissions/

class Solution
{
  public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        int max{0};
        int cons{0};
        for (auto &a : nums)
        {
            if (a)
            {
                ++cons;
            }
            else
            {
                cons = 0;
            }
            if (cons > max)
            {
                max = cons;
            }
        }
        return max;
    }
};