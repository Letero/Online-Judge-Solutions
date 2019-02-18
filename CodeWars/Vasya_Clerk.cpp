//https://www.codewars.com/kata/555615a77ebc7c2c8a0000b8/train/cpp

std::string tickets(const std::vector<int> peopleInLine)
{
    int quarter = 0, half = 0;
    for (auto a : peopleInLine)
    {
        if (a == 25)
        {
            quarter++;
        }
        if (a == 50)
        {
            half++;
            quarter--;
        }
        if (a == 100)
        {
            if (half < 1)
            {
                quarter -= 3;
            }
            else
            {
                quarter--;
                half--;
            }
        }
        if (quarter >= 0 && half >= 0)
        {
            ;
        }
        else
        {
            return "NO";
        }
    }
    return "YES";
}