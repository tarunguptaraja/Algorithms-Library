#include<iostream>
using namespace std;

    int main()
    {
        int a,b,sum,carry;
        cout <<"Enter two numbers \n";
        cin>>a>>b;

        while (b!=0)
        {
            sum=a^b;
            carry=(a&b)<<1;
            a=sum;
            b=carry;
        }
        cout <<"sum of two numbers is"<<sum;
        return 0;
    }
         