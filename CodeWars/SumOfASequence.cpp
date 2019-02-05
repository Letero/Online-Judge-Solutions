//https://www.codewars.com/kata/586f6741c66d18c22800010a/train/cpp

int sequenceSum(int start, int end, int step)
{
  int sum = 0;
  if (start > end)
  {
    ;
  }
  else
  {
    while (start <= end)
    {
      sum += start;
      start+=step;
    }
  }
  return sum;
}