# Algorithms-Library

This repo contains a lot of Algos. If you want to revise just come and learn.


#For Contributors

1. Fork this repo
2. Add a new Algorithm and send me your pr.

Note: 
1. Algorithm will be written in C++ or Java.
2. If one algorithm already in any language you can't do that in 2nd language.

<!-- NEW ALGO 1- -->
#include<bits/stdc++.h>
using namespace std;
#define max(a,b) a>b?a:b
#define min(a,b) a<b?a:b
#define O cout<<
#define I cin>>
#define f0(i,n) for(int i=0;i<n;i++)
#define f1(i,n) for(int i=1;i<n;i++)
#define speed_karo ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll  long long
int binaryS(int ar[],int key,int l,int h){
    while(l<=h){
        int mid = floor((l+h)/2);
        if(key==ar[mid]){
            return mid;
        }
        else if(key<ar[mid]){
            h = mid-1;

        }
        else{
            l=mid+1;
        }
    }
    return -1;

}
///recursive method
int binaryS2(int ar[],int key,int l,int h){
    if(l<=h){
        int mid = floor((l+h)/2);
        if(key==ar[mid]){
            return mid;
        }
        else if(key<ar[mid]){
            return binaryS2(ar,key,l,mid-1);

        }
        else{
            return binaryS2(ar,key,mid+1,h);
        }
    }
    return -1;

}
int main(){
int ar[10]={1,2,3,4,5,6,7,8,9,10};
// int size= 7;
cout<<binaryS2(ar,7,0,9);




return 0;
}


