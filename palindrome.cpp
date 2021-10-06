
//palindrome program 


#include <iostream>
using namespace std;
int main()
{
  int p, r;
  int  sum = 0;
  int  temp;
  cout << "Enter the Number=";
  cin >> p;
  temp = p;
  while (p > 0)
  {
    r = p % 10;
    sum = (sum * 10) + r;
    p = p / 10;
  }
  if (temp == sum)
    cout << "Number is Palindrome.";
  else
    cout << "Number is not Palindrome.";
  return 0;
}