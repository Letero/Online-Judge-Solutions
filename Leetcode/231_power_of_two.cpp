bool isPowerOfTwo(int n)
{
    if (n > 0)
    {
        if ((n & (n - 1)) == false)
        {
            return true;
        }
    }
    return false;
}