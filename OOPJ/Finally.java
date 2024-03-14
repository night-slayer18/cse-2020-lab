import java.util.*;
class Finally
{
	public static void main(String args[])
	{
		try
		{
			int a=42,b,c;
			Scanner s = new Scanner(System.in);
			b=s.nextInt();
			c=a/b;
			System.out.println(c);
		}
		catch(ArithmeticException e)
		{
			System.out.println("arithmetic exception caught");
		}
		finally
		{
			System.out.println("finally block");
		}
		System.out.println("rest of the prgm");
	}
}

