// the fastest solution I was able to figure out

class Solution {
public:
    int fib(int N) 
    {
        if (N <= 1)
        {
            return N;
        }
        int f1 = 0;
        int f2 = 1;
        while(--N)
        {
            int r = f1+f2;
            f1 = f2;
            f2 = r;
        }
        return r;
    }
};

