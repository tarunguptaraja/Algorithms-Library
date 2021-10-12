#include<iostream>
using namespace std;
int main()
{
 int n,i,sum=0, missing;
 cout << "enter the no of elements in array:  \n";
 cin >> n;
 int a[n-1];
 cout << "insert the lements in array: \n";
 for(i=0; i<n-1; i++)
 {
 cin >> a[i];
 sum = sum+ a[i];
 }
 missing = (n*(n+1))/2 - sum;
  cout << "missing no is: " << missing;
  return 0;
  }
