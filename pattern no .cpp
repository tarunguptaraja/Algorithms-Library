#include<iostream>
using namespace std;
int main()
{
  int i,j,n,size,start,end,a[i][j];
  cout << "enter the no of elemets: ";
  cin >> n;
  size = 2 * n - 1;
  start = 0;
   end = size -1 ;
   while(n!=0)
   {
     for(i=start; i<=end; i++)
   {
    for(j=start; j<=end; j++)
    {
     if(i==start || i==end || j==start || j==end)
     a[i][j]=n;
     }
     }
     size++;
     end--;
     n--;

     }
     for(i=start; i<size; i++)
     {
      for(j=start; j<size; j++)
      cout << " " << a[i][j];
      cout << " ";
       }
        return 0;
      }
