import java.util.*;
class lsarray
{
	public static void main(String args[])
	{
		int i,n,small,large;
		int a[]=new int[10];
		System.out.print("enter the limit:");
		Scanner sc= new Scanner(System.in);
		n=sc.nextInt();
		System.out.println("enter the elements of the array");
		for(i=0;i<n;i++)
		{
			a[i]=sc.nextInt();
		}
		small=a[0];
		large=a[0];
		for(i=0;i<n;i++)
		{
			if(large<a[i])
			{
				large=a[i];
			}
			if(small>a[i])
			{
				small=a[i];
			}
		}	
		System.out.println("largest is "+large);
		System.out.println("smallest is "+small);
	}
}

