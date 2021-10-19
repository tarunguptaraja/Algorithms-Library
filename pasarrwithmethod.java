
//Pass Array With Method Program In Java 
import java.util.*;
public class Main
{
	public static void main(String[] args) {
	    int n;
	    Scanner sc=new Scanner(System.in);
	    System.out.println("Enter size of Array : ");
	    n=sc.nextInt();
		int[] arr=new int[n];
		System.out.println("Enter the element in Array : ");
		for(int i=0;i<n;i++)
		arr[i]=sc.nextInt();
		System.out.println("The Array is : ");
		for(int i=0;i<n;i++)
		System.out.print(+arr[i]+" ");
		System.out.println();
		sum(arr);
	}
	public static void sum(int arr[])
	{
	    int sum=0;
	    for(int i=0;i<arr.length;i++)
	    sum+=arr[i];
	    System.out.print("Sum of array values : "+sum);
	    System.out.println();
	}
}