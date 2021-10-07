#include <iostream>
using namespace std;

void linear_Search(int a[], int n)
{
    int count = -1;

    for (int i = 0; i < 5; i++)
    {
        if (a[i] == n)
        {
            cout << "Element found at position: " << i + 1 << endl;
            count = 0;
            break;
        }
    }

    if (count == -1)
    {
        cout << "Element not found" << endl;
    }
}

int main()
{
    int arr[5];
    cout << "enter 5 element of array" << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    cout << "Please enter an element to search" << endl;
    int num;
    cin >> num;
    
    linear_Search(arr, num);
    

    return 0;
}