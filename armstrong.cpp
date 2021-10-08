#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int number, number1,n,result=0,i=0, power,temp;
  cout << "enter the number";
  cin >> number;
  number1=number;
  temp=number;

  while(number1 !=0)
  {
   number =number/ 10;
   i++;
   }
   number1= number;
   while(number1 !=0)
   {
   n= number1 %10;
   power = round(pow(n,i));
   result = result + power;
   number1= number1 /10;
   }
   if(temp==result)
   cout <<number<<"number is armstrong";
   else
   cout <<number<< "number is not armstrong";
   return 0;
   }
