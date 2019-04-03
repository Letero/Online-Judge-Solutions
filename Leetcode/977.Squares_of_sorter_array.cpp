class Solution
{
  public:
    vector<int> sortedSquares(vector<int> &A)
    {
        vector<int>::iterator it;
        for (it = A.begin(); it != A.end(); ++it)
        {
            *it *= *it;
        }
        sort(A.begin(), A.end());
        return A;
    }
};