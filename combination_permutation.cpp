// Program to find nCr and nPr
#include<stdio.h>
long factorial(int);
long nCr(int,int);
long nPr(int,int);
int main()
{
    int n, r;
    long c,p;
    scanf("%d",&n);
    scanf("%d",&r);
    c = nCr(n,r);
    p = nPr(n,r);
    printf("nCr = %ld\n",c);
    printf("nPr = %ld\n",p);
    return 0;
}
long factorial(int n)
{
    int i;
    long result=1;
    for(i=2;i<=n;i++)
    
        result= result*i;
        return (result);
}
long nCr(int n,int r)
{
    long result;
    result = factorial(n)/(factorial(r)*factorial(n-r));
    //printf("%ld",result);
    return result;
}
long nPr(int n,int r)
{
    long result;
    result = factorial(n)/factorial(n-r);
    //printf("%ld",result);
    return result;
}
