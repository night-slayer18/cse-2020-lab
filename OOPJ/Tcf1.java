class Tcf1
{
	public static void main(String args[])
	{
		int c[]=new int[2];
		try
		{
			c[0]=12;
			c[1]=55;
			System.out.println(c[0]);
			System.out.println(c[1]);
			c[5]=100;
		}
		catch(ArrayIndexOutOfBoundsException ae)
		{
			System.out.println("Array index exception caught");
		}
		finally
		{
			System.out.println("finally block encountered");
		}

		System.out.println("the rest of the code");
	}
}

