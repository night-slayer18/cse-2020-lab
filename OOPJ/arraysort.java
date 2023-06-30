import java.util.*;
class arraysort
{
	public static void main(String args[])
	{
		int i,n,j,temp;
		int a[]=new int[10];
		System.out.print("enter the limit:");
		Scanner sc= new Scanner(System.in);
		n=sc.nextInt();
		System.out.println("enter the elements of the array");
		for(i=0;i<n;i++)
		{
			a[i]=sc.nextInt();
		}
		for(i=0;i<n-1;i++)
		{
			for(j=0;j<n-i-1;j++)
			{
				if(a[j]>a[j+1])
				{
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
			}
		}
		System.out.println("the sorted array is");
		for(i=0;i<n;i++)
		{
			System.out.println(a[i]);
		}
	}
}
