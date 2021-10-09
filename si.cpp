#include<iostream>
using namespace std;

int main()
{
	int p,r,t,i;
		cout << "Calculate the Simple Interest :\n\n";	
	cout<<" Input the Principle: ";
	cin>>p;
	cout<<" Input the Rate of Interest: ";
	cin>>r;
	cout<<" Input the Time: ";
	cin>>t;
	i=(p*r*t)/100;
	cout<<"Simple interest for the amount "<<p<<" for "<<t<<" years @ "<<r<<" % is\t "<<i;
        cout << endl;
	return 0;
}