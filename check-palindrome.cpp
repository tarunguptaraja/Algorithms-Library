#include <iostream>
using namespace std;

int main()
{
    int n, num, digit, rev = 0;

    cout << "Enter a positive no: ";
    cin >> num;
    n = num;
    
    do
    {
        digit = num % 10;
        rev = (rev * 10) + digit;
        num = num / 10;
    } while (num != 0);

    cout << "Reversed no: " << rev << endl;

    if (n == rev)
        cout << " Number is palindrome";
    else
        cout << " Number is not palindrome";

    return 0;
}
