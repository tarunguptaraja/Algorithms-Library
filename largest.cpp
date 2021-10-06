#include<bits/stdc++.h>
using namespace std;

int main(){

int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
	cin>>arr[i];}
sort(arr,arr+n);
	// largest no.
//	cout<<arr[n-1]<<endl;
	//second largest no
//	cout<<arr[n-2]<<endl;
for(int i=0;i<n;i++){
	cout<<arr[i]<<" ";}
return 0;
}

