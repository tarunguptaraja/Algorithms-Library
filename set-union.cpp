#include <iostream>
using namespace std;

void sort(int size, int a[])
{
    int i, j, temp;
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int removerepeated(int size, int a[])
{
    int i, j, k;
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size;)
        {
            if (a[i] == a[j])
            {
                for (k = j; k < size; k++)
                {
                    a[k] = a[k + 1];
                }
                size--;
            }
            else
            {
                j++;
            }
        }
    }
    return (size);
}

main()
{
    int i, size1, size2, size, j = 0, k;
    cout<<"Enter size of an array1"<<endl;
    cin>>size1;
    cout<<"Enter size of an array2"<<endl;
    cin>>size2;
    int a[size1], b[size2], uni[size1 + size2]; //arrays

    //data input
    cout<<"Enter numbers for array 1"<<endl;
    for (i = 0; i < size1; i++)
    {
        cin>>a[i];
    }
    cout<<"Enter numbers for array 2"<<endl;
    for (i = 0; i < size2; i++)
    {
        cin>>b[i];
    }

    //union

    for (i = 0; i < size1; i++)
    {
        uni[j] = a[i];
        j++;
    }

    for (i = 0; i < size2; i++)
    {
        uni[j] = b[i];
        j++;
    }
    // union end

        sort(size1 + size2, uni);
    size = removerepeated(size1 + size2, uni);
    cout<<"Array after Union "<<endl;
    for (i = 0; i < size; i++)
    {
        cout<<uni[i]<<endl;
    }
}