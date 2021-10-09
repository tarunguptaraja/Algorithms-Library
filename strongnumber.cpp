/*strong no. is a number whose sum of factorial of individual digits is equal to original no.
  145=> 1! + 4! + 5!=1 + 24 + 120=145 */

    #include<iostream>
    using namespace std;

    int main()
    {
        int n,sum=0,temp;
        cout <<"Enter number to check\t";
        cin >>n;
        temp=n;
        
        while(n!=0)
        {
            int num,fact,i;
            num=n%10;
            fact = 1;
            for(i=num; i>0; i--)
                fact=fact*i;
            sum=sum+fact;
            n=n/10;
        }
        
        if(sum==temp)
            cout<<temp<<"  is a Strong Number";
        else
            cout<<temp<<"  is not a Strong Number";
        return 0;
    }
