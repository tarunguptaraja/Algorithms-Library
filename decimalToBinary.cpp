#include <iostream>
using namespace std;
 
void decToBinary(int n)
{
    int digit[64];
    int i = 0;
    while (n != 0) 
    {
        digit[i] = n % 2;
        n = n / 2;
        i++;
    }
     for (int j = i - 1; j >= 0; j--)
        cout << digit[j];
}
 
int main()
{
    int n;
    cout<<" Input a decimal number ";
	cin>>n;
    decToBinary(n);
    return 0;
}

