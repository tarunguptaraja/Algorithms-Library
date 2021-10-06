#include<iostream>
using namespace std;
 
int fib(int n)
{
    if (n <= 1)
        return 1;
    else    
       return fib(n-1) + fib(n-2);
}
 
int main ()
{
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;
    cout<<"term of fibonnaci series at position"<<n<<"is " <<fib(n)<<endl;
    return 0;
}