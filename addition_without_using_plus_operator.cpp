#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two number";
    cin>>a>>b;
    while(a!=0)
    {
        a--;
        b++;
    }
    cout<<"Addition is = "<<b;
    return 0;

}
