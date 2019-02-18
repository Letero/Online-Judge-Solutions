//https://www.codewars.com/kata/525f4206b73515bffb000b21/train/cpp
// first version, would be nice to refactor
#include <string>

std::string add(std::string a, std::string b)
{
    std::reverse(a.begin(), a.end());
    std::reverse(b.begin(), b.end());
    std::string c = "";
    int diff = 0;
    int len = a.length();
    if (b.length() > a.length())
    {
        diff = b.length() - a.length();
        len = b.length();
        for (int i = 0; i < diff; ++i)
        {
            a += "0";
        }
    }
    else
    {
        diff = a.length() - b.length();
        for (int i = 0; i < diff; ++i)
        {
            b += "0";
        }
    }
    bool rest = 0;

    for (auto i = 0; i < len; ++i)
    {
        int temp = a[i] + b[i] - 96 + rest; // 96 - ascii
        rest = 0;
        if (temp > 9)
        {
            rest = 1;
            temp %= 10;
        }
        c += std::to_string(temp);
    }
    if (rest)
    {
        c += std::to_string(1);
    }

    reverse(c.begin(), c.end());

    while (c.length() > 1 && c[0] == '0')
    {
        c.erase(0, 1);
    }
    return c;
}