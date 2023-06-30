import java.util.*;
class fact
{
	public static void main(String args[])
	{
		int i,n,f=1;
		System.out.println("enter the number");
		Scanner sc= new Scanner(System.in);
		n=sc.nextInt();
		for(i=1;i<=n;i++)
		{
			f=f*i;
		}
		System.out.println("the factorial of "+n+"! is "+f );
	}
}
