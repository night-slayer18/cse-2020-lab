import java.util.*;
class palin
{
	public static void main(String args[])
	{
		int n,copy,rem,rev=0;
		System.out.println("enter the number");
		Scanner sc= new Scanner(System.in);
		n=sc.nextInt();
		copy=n;
		while(n>0)
		{
			rem=n%10;
			rev=rev*10+rem;
			n=n/10;
		}
		if(copy==rev)
		{
			System.out.println("the number "+copy+" is palindrome");
		}
		else
		{
			System.out.println("the number "+copy+" is not palindrome");
		}
	}
}
		
