#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number of element to store:";
    cin >> n;
    int a[n], i, j;
    cout << "enter the element in the array:\n";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    cout << "after bubble sort the array:\n";
    for (i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}