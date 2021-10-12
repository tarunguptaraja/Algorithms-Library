#include<iostream>
using namespace std;
void swap(int *x,int *y)
{
    int z;
    z=*x;
    *x=*y;
    *y=z;
}
 int main()
 {
     int a,b;
     
     cout<<"Please enter the first number a:"<<endl;
     cin>>a;

      cout<<"Please enter the second number b:"<<endl;
     cin>>b;

      swap( &a, &b);
     cout<<"After swaping" <<endl;

     cout<<"a= "<<a<<endl;;

     cout<<"b= "<<b<<endl;

     return 0;
 }
