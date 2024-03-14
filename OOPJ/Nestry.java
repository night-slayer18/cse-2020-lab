class Nestry
{
	public static void main(String args[])
	{
		try
		{
			int a=args.length;
			System.out.println("a="+a);
			int b=42/a;
			try
			{
				if(a==1)
				{
					a=a/(a-a);
				}
				if(a==2)
				{
					int d[]=new int[2];
					d[5]=33;
				}
			}
			catch(ArrayIndexOutOfBoundsException i)
			{
				System.out.println("array index out of bounds exception caught");
			}
		}
		catch(ArithmeticException i)
		{
			System.out.println("arithmetic exception caught");
		}
	}
}
