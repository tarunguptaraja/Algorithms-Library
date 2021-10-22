#include<iostream>
using namespace std;
int main()
{
   int arr1[30],arr2[30],sum[30],i,n;
   cout <<" Please enter the size of array"<<endl;
   cin>>n;
   
   cout<<"Please enter the first array"<<endl ;
   for(i=0;i<n;i++)
    {                                             
       cin>>arr1[i];
    }


        cout<<"Please enter the second array"<<endl;


    for(i=0;i<n;i++)         
   {
       cin>>arr2[i];
   }

   cout<<"Sum of the arrays:"<<endl;


   for(i=0;i<n;i++)
   {
       sum[i]=arr1[i]+arr2[i];
       cout<<sum[i]<<endl;
   }
   return 0;
}