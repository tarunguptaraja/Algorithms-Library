#include<iostream>
using namespace std;
int main()
 {
   int a,i=1, n;
   cout << "enter the no: \n";
   cin >> n;
   for(i=1; i<=10; i++)
   {
     a=n*i;
     cout << n << " * " << i << " = " <<  n * i << "\n"  ;

     }
     return 0;
     }
/*#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter a positive integer: ";
    cin >> n;

    for (int i = 1; i <= 10; ++i) {
        cout << n << " * " << i << " = " << n * i << endl;
    }

    return 0;
}*/
