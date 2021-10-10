#include<iostream>
using namespace std;
int main()
{
  int a[10],b[10],c[10],i,j,k=0,n1,n2;
  cout << "enter the number of elements of set A :  ";
  cin>> n1;
  cout<< "enter the elements of set A\n";
  for(i=0; i<n1; i++)
  cin >> a[i];


  cout<< "enter the no of elements of set B\n";
  cin>>n2;
  cout<< "enter the elements of set B\n";
  for(i=0; i<n2; i++)
  cin >> b[i];

     for(i=0; i<n1; i++)
     {
     for(j=0; j<k; j++)
     {
       if(c[j]==a[i])
       break;
       }
       if(j==k)
       {
         c[k]=a[i];
         k++;
         }
         }
         for(i=0; i<n2; i++)
     {
     for(j=0; j<k; j++)
     {
       if(c[j]==b[i])
       break;
       }
       if(j==k)
       {
         c[k]=b[i];
         k++;
         }
         }
         cout<< "union of set A and B is :\n";
         for(i=0; i<k; i++)
         cout<< " " << c[i];
         return 0;
          }
