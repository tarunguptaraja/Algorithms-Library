#include<iostream>
using namespace std;
int main()
{
  int sum=0,d,n;
   cout << "enter any number:  ";
  cin >> n;
  while(n>0)
  {
   d=n%10;
   sum=sum+d;
   n=n/10;
   }
   cout <<"\nsum of digits :"<< sum;
   return 0;
   }
