#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int n1,n2,i,j;
	int a[n1],b[n2];
	cout<<"Enter the size Set1 and Set2"<<endl;
	cin>>n1>>n2;
	cout<<"Enter the elements of Set1"<<endl;
	
	for(i=0;i<n1;i++){
		cin>>a[i];
	}
	

		cout<<"Enter the elements of Set2"<<endl;
	for(i=0;i<n2;i++){
		cin>>b[i];
	}
	
	cout<<"Intersection of Two sets"<<endl;
	for(i=0;i<n1;i++){
		for(j=0;j<n2;j++){
			if(a[i]==b[j]){
				cout<<a[i]<<" ";
			}
		}
	}
	
	return 0;
}
