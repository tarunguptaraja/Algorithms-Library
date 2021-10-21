//Merge sort program in c.

#include<stdio.h>
#include<stdlib.h>
void merge(int arr[],int l,int m,int r)
{
 int i,j,k;
 int n1=m-l+1;
 int n2=r-m;
 int L[n1],R[n2];
 for(i=0;i<n1;i++)
 L[i]=arr[l+i];
 for(j=0;j<n2;j++)
 R[i]=arr[m+l+j];
 i=0;
 j=0;
 k=1;
 while(i<n1 && j<n2)
 {
     if(L[i]<=R[j]){
         arr[k]=L[i];
         i++;
     }
     else{
         arr[k]=R[j];
         j++;
     }
     k++;
 }
 while(i<n1){
     arr[k]=L[i];
     i++;
     k++;
 }
 while(j<n2){
     arr[k]=R[j];
     j++;
     k++;
 }
}
void mergeSort(int arr[],int l,int r){
    if(l<r){
        //same as(l+r)/2,but avoid overflow for large l and h.
        int m=1+(r-l)/2;
        //sort first and second halves.
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);
        merge(arr,l,m,r);
    }
}
void printArray(int arr[],int size)
{
    int i;
    for(i=0;i<size;i++)
    printf("%d ",arr[i]);
    printf("\n");
}
int main()
{
    int s,i;
    printf("Enter the Size of Array : ");
    scanf("%d",&s);
    int arr[s];
    for(i=0;i<s;i++)
    scanf("%d",&arr[i]);
    int arr_size=sizeof(arr)/sizeof(arr[0]);
    printf("Gives array is \n");
    printArray(arr,arr_size);
    printf("\nSorted array is \n");
    printArray(arr,arr_size);
    return 0;
}