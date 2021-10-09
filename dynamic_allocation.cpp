#include <iostream>  
using namespace std;  
int main ()  
{  
    int* m = NULL;  
  
    m = new(nothrow) int;  
    if (!m)  
        cout<< "allocation of memory failed\n";  
    else  
    {  
        *m=29;  
        cout<< "Value of m: " << *m <<endl;  
    }  
    float *f = new float(75.25);  
    cout<< "Value of f: " << *f <<endl;  
    int size = 5;  
    int *arr = new(nothrow) int[size];  
    if (!arr)  
        cout<< "allocation of memory failed\n";  
    else  
    {  
        for (int i = 0; i< size; i++)  
            arr[i] = i+1;  
  
        cout<< "Value store in block of memory: ";  
        for (int i = 0; i< size; i++)  
            cout<<arr[i] << " ";  
    }  
  
    delete m;  
    delete f;  
    delete[] arr;  
  
    return 0;  
}  