import java.util.*;
class arraysearch
{
	public static void main(String args[])
	{
		int i,n,ele,flag=0;
		int a[]=new int[10];
		System.out.print("enter the limit:");
		Scanner sc=new Scanner(System.in);
		n=sc.nextInt();
		System.out.println("enter the elements of the array");
		for(i=0;i<n;i++)
		{
			a[i]=sc.nextInt();
		}
		System.out.print("enter the element to be searched:");
		ele=sc.nextInt();
		for(i=0;i<n;i++)
		{
			if(ele==a[i])
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
			System.out.println("element not found");
		else
			System.out.println(ele+" is found at position");
	}
} 
