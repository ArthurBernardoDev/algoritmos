#include <iostream>
using namespace std;

int main()
{
  int nums[5] = {0, 1, 0, 3, 12};

  int left = 0;

  for (int i = 0; i < 5; i++)
  {
    if (nums[i] != 0)
    {
      const int lastZero = nums[left];
      nums[left] = nums[i];
      nums[i] = lastZero;
      left++;
    }
  }

  for (int i = 0; i < 5; i++)
  {
    cout << nums[i] << endl;
  }
}