import java.util.*;
import java.lang.Math;
class armstrong
{
	public static void main(String args[])
	{
		int i,n,c1,c2,rem,count=0;
		double sum=0;
		System.out.println("enter the number");
		Scanner sc= new Scanner(System.in);
		n= sc.nextInt();
		c1=n;
		c2=n;
		while(c1>0)
		{
			c1=c1/10;
			count++;
		}
		while(n>0)
		{
			rem=n%10;
			sum=sum+Math.pow(rem,count);
			n=n/10;
		}
		if(c2==sum)
		{
			System.out.println("the number "+c2+" is an armstrong number");
		}
		else
		{
			System.out.println("the number "+c2+" is not an armstrong number");
		}
	}
}


