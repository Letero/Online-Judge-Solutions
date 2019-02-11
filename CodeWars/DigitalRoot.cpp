//version 1

int calc(int n)
{
    int rest = 0;
    while (n)
    {
        rest += n % 10;
        n /= 10;
    }
    return rest;
}

int digital_root(int n)
{
    int rest = calc(n);
    while (rest > 9)
    {
        rest = calc(rest);
    }

    return rest;
}

//refactored version

int digital_root(int n)
{
    return --n % 9 + 1;
}
// %9 solves all numbers other than 9
// eg. 195 % 9 = 7, 16%9 = 7
// but if we have multiplication of 9 then result would be 0, eg 9%9 = 0 and should be 9 in this task
// to avoid that deincrement value by 1 and add 1 to the result
// 8 % 9 + 1 = 9
