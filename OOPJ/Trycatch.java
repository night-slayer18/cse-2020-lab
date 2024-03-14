class Trycatch
{
	public static void main(String args[])
	{
		int c[]=new int[2];
		c[0]=22;
		c[1]=37;
		try
		{
			System.out.println(c[0]);
			System.out.println(c[1]);
			c[5]=34;
			System.out.println(c[5]);
		}
		catch(ArithmeticException e1)
		{
			System.out.println("Arithmetic Exception caught");
		}
		catch(ArrayIndexOutOfBoundsException e2)
		{
			System.out.println("Array Index Out Of Bounds Exception caught");
		}
		catch(NullPointerException e3)
		{
			System.out.println("NULL pointer exception caught");
		}
		System.out.println(c[0]);
		System.out.println(c[1]);
	}
} 
