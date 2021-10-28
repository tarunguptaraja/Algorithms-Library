#include <iostream>
using namespace std; 
int check(string var) 
{ 
    string array[] = {"mob","mic","blower","radio","lappy","vision","wave","i","use","ac","fridge"}; 
    int size = sizeof(array)/sizeof(array[0]); 
    for (int j = 0; j < size; j++) 
        if (array[j].compare(var) == 0) 
           return true; 
    return false; 
} 
bool divide(string ch) 
{ 
    int size = ch.size(); 
    if (size == 0)  
        return true; 
    for (int i=1; i<=size;i++) 
    { 
        if (check(ch.substr(0,i)) && divide(ch.substr(i,size-i))) 
            return true; 
    } 
    return false; 
} 
int main() 
{ 
    string ch;
    cout<<"enter string\n";
    cin>>ch;
    if(divide(ch))
        cout<<"yes";
    else
        cout<<"no";
    return 0; 
}