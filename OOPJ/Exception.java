import java.util.*;
import java.io.*;
class ex
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
				k=51/a;
				System.out.println(k);
			}
		}
		catch(ArithmeticException e)
		{
			System.out.println("Arithmetic exception caught");
		}
	}
	void fileopen() throws FileNotFoundException
	{
		FileInputStream fis = new FileInputStream("hello.txt");
	}
}
class Exception
{
	public static void main(String args[])
	{
		int a;
		ex e= new ex();
		Scanner sc = new Scanner(System.in);
		System.out.println("enter a number:");
		a=sc.nextInt();
		e.eligible(a);
		try
		{
			e.fileopen();
		}
		catch(FileNotFoundException e1)
		{
			System.out.println("File not found exception caught");
		}
		finally
		{
			System.out.println("finally block encountered");
		}
		System.out.println("rest of the program code");
	}
}

			
