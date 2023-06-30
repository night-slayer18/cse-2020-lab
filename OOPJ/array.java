import java.util.*;
class sumarray
{
	public static void main(String args[])
	{
		int a[]= new int[10];
		int n,sum=0,avg;
		System.out.print("enter the limit:");
		Scanner s= new Scanner(System.in);
		n=s.nextInt();
		System.out.println("enter the elements of the array");
		for(int i=0;i<n;i++)
		{
			a[i]=s.nextInt();
			sum+=a[i];
		}
		avg=sum/n;
		System.out.println("the sum is "+sum);
		System.out.println("the average is "+avg);
	}
}
