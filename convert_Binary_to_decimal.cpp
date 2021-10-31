#include<iostream>
using namespace std;
int main()
{
    int decimal=0,binary,base=1,rem,num;
    cout<<"Enter the binary number";
    cin>>binary;
    num=binary;
    while(binary!=0)
    {
        rem=binary%10;decimal=decimal+rem*base;
        binary=binary/10;
        base=base*2;

    }
    cout<<"Decimal equivalent is "<<decimal;
    return 0;
}
