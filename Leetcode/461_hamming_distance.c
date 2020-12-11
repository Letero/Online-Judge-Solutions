int hammingDistance(int x, int y)
{
    int count = 0;
    int a = x ^ y;
    while (a)
    {
        if (a & 1)
        {
            count++;
        }
        a >>= 1;
    }
    return count;
}