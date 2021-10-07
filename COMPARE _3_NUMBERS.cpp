

#include <iostream>
#include <conio.h>
using namespace std;
int main ()
{
    int x,y,c;
    cout<<"PLEASE ENTER THE NUMBER TO COMPARE AMOUNG THREE NUMBERS"<<endl;
    cin>>x>>y>>c;
    if(x>y)
    {
        if (x>c){
            cout<<"Greatest no. is "<<x;
        }
        else {
            cout<<"Greatest no. is "<<c;
        }
    }
    else
    {
        if(y>c)
            {
            cout<<"Greatest no. is "<<y;
            }
    else {
            cout<<"Greatest no. is "<<c;
        }
    }
    return 0;
}
