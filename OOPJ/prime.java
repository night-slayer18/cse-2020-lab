import java.util.*;
class prime
{
	public static void main(String args[])
	{
		int n,i,flag=0;
		System.out.println("enter the number");
		Scanner sc= new Scanner(System.in);
		n=sc.nextInt();
		for(i=2;i<n;i++)
		{
			if(n%i==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==1 && n!=1)
		{
			System.out.println("the number "+n+" is not prime");
		}
		else
		{
			System.out.println("the number "+n+" is prime");
		}
	}
}
