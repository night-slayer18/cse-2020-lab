class Finall2
{
	public static void main(String args[])
	{
		try
		{
			int a=42,b=0,c;
			c=a/b;
			System.out.println(c);
		}
		finally
		{
			System.out.println("finally block encountered");
		}
	}
}
