class Trycatch2
{
	public static void main(String args[])
	{
		int c[]=new int[2];
		try
		{
			c[0]=5;
			c[1]=10;
			System.out.println(c[0]);
			System.out.println(c[1]);
			c[10]=234;
			System.out.println(c[10]);
		}
		catch(ArrayIndexOutOfBoundsException ae)
		{
			System.out.println("array index exception caught");
		}
	}
}

		
