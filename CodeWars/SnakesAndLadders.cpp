//https://www.codewars.com/kata/snakes-and-ladders-1/train/cpp
#include <map>
class SnakesLadders
{
  public:
    SnakesLadders();
    std::string play(int die1, int die2);

  private:
    int checkPos(int &actPos);
    std::map<std::string, int> players;
    std::map<int, int> pos;
    std::string actPlayer;
    bool gameOver;
};

int SnakesLadders::checkPos(int &actPos)
{
    int newPos = actPos;
    switch (newPos)
    {
    case 2:
    case 7:
    case 8:
    case 15:
    case 21:
    case 28:
    case 36:
    case 51:
    case 71:
    case 78:
    case 16:
    case 46:
    case 49:
    case 62:
    case 64:
    case 74:
    case 87:
    case 89:
    case 92:
    case 95:
    case 99:
        newPos = pos[actPos];
    }
    return newPos;
}

SnakesLadders::SnakesLadders()
{
    players = {{"Player 1", 0}, {"Player 2", 0}};
    actPlayer = "Player 1";
    gameOver = false;
    pos =
        {
            //ladder
            {2, 38},
            {7, 14},
            {8, 31},
            {15, 26},
            {21, 42},
            {28, 84},
            {36, 44},
            {51, 67},
            {71, 91},
            {78, 98},
            {87, 94},
            //snake
            {16, 6},
            {49, 11},
            {46, 25},
            {62, 19},
            {64, 60},
            {74, 53},
            {89, 68},
            {92, 88},
            {95, 75},
            {99, 80}};
};

std::string SnakesLadders::play(int die1, int die2)
{
    if (gameOver)
    {
        return "Game over!";
    }
    std::string prev = actPlayer;

    if (die1 != die2)
    {
        if (actPlayer == "Player 1")
        {
            actPlayer = "Player 2";
        }
        else
        {
            actPlayer = "Player 1";
        }
    }
    int val = players[prev] + (die1 + die2);
    if (val == 100)
    {
        gameOver = true;
        return (prev + " Wins!");
    }
    if (val > 100)
    {
        val = 100 - (val - 100);
        players[prev] = val;
        players[prev] = checkPos(players[prev]);
    }
    else
    {
        players[prev] = checkPos(val);
    }
    return (prev + " is on square " + std::to_string(players[prev]));
};