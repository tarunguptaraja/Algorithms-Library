#include<iostream>
using namespace std;
int main()
{
    int n,i,j,r;
    cout<<"Enter the number of rows";
    cin>>r;
    n=1;
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",n);
            n++;
        }
        printf("\n");

    }
    return 0;
}
