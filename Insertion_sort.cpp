
#include <bits/stdc++.h>
using namespace std;

void insertSort(int array[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = array[i];
        j = i - 1 ;
        while (j >= 0 && array[j] > key)
        {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = key;
    }
}
 
void printArray(int array[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << array[i] << " ";
    cout << endl;
}
 
int main()
{
    int arr[] = { 12, 11, 13, 5, 6 };
    int n = sizeof(array) / sizeof(array[0]);
 
    insertSort(array, n);
    printArray(array, n);
 
    return 0;
}
 