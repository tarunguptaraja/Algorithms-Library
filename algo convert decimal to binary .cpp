#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n;
	cout<<"Enter the decimal number to convert into binary ";
	cin>>n;
	int arr[32],i=0,rem;
	while(n!=0){
		rem=n%2;
		arr[i]=rem;
		n=n/2;
		i++;
	}
	for(int j=i-1;j>=0;j--){
		cout<<arr[j]<<" ";
	}
	
	return 0;
}
