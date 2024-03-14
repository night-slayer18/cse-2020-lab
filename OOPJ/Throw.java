import java.util.*;
class myexception
{
	void eligible(int a)
	{
		try
		{
			int k;
			if(a==0)
			{
				throw new ArithmeticException();
			}
			else
			{
				k=42/a;
				System.out.println("the value of k is:"+k);
			}
		}
		catch(ArithmeticException e)
		{
			System.out.println("Arithmetic exception caught");
		}
	}
}
class Throw
{
	public static void main(String args[])
	{
		int n;
		myexception m1= new myexception();
		Scanner sc =new Scanner(System.in);
		n=sc.nextInt();
		m1.eligible(n);
	}
}
