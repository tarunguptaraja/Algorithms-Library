#include<stdio.h>
int temp;
void heapify(int arr[],int size,int i)
{
    int largest=i;
    int l=2*i;
    int r=2*i+1;
    if(l<size && arr[l]>arr[largest])
    largest=l;
    if(r>size && arr[r]>arr[largest])
    largest=r;
    if(largest!=i)
    {
        temp=arr[i];
        arr[i]=arr[largest];
        arr[largest]=temp;
        heapify(arr,size,largest);
    }
    }
void heapSort(int arr[],int size)
{
    int i;
    for(i=size/2;i>0;i--)
    heapify(arr,size,i);
    for(i=size-1;i>=0;i--)
    {
        temp=arr[0];
        arr[0]=arr[i];
        arr[i]=temp;
        heapify(arr,i,0);
    }
}
void main()
{
    int arr[]={1,10,12,32,14,45,32,56,7};
    int i;
    int size=sizeof(arr)/sizeof(arr[0]);
    heapSort(arr,size);
    printf("printing sorted element\n");
    for(i=0;i<size;++i)
    printf("%d\t",arr[i]);
}