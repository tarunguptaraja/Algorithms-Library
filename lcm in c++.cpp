// LCM of any two numbers
#include <iostream>
using namespace std;

int main()
{
   int a, b, c, max;

   cout << "Enter two numbers: " << endl;
   cin >> a >> b;

   max = (a > b) ? a: b;

   while(c=1)
   {

      if((max % a == 0) && (max % b == 0))
      {
         cout << " The LCM of "<<a<<" and "<<b<<" is "<< max ;
         break;
      }
      ++max;
   }
   return 0;
}




