#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    int n,digit,sum=0,i=0;
    cout<<"enter a binary no.\t";
    cin>>n;
    while(n!=0)
       {
           digit=n%10;
           n=n/10;
           if(digit>1)
             {
                 cout<<"the no. entered is not a binary no.\n";
                 exit(0);
             }  
           else
             {
               sum = sum + (pow(2,i))*digit;
               ++i; 
             }
       }    
    cout<<"value of binary no. in decimal is \t"<<sum;
}