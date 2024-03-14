import java.io.*;
class T1 extends Thread
{
	public void run()
	{
		try
		{
			int i;
			char ch;
			boolean b;
			FileInputStream fis = new FileInputStream("f1.txt");
			FileOutputStream fos = new FileOutputStream("f2.txt");
			i=fis.read();
			do
			{
				ch=(char)i;
				b=Character.isLowerCase(ch);
				if(b==true)
				{
					fos.write(ch);
				}
				i=fis.read();
			}while(i!=-1);
			fos.close();
			fis.close();
		}
		catch(IOException e1)
		{
			System.out.println("exception caught");
		}
	}
}
class T2 extends Thread
{
	public void run()
	{
		try
		{
			int j;
			char c;
			boolean b;
			FileInputStream fis = new FileInputStream("f1.txt");
			FileOutputStream fos = new FileOutputStream("f3.txt");
			j=fis.read();
			do
			{
				c=(char)j;
				b=Character.isUpperCase(c);
				if(b==true)
				{
					fos.write(c);
				}
				j=fis.read();
			}while(j!=-1);
			fos.close();
			fis.close();
		}
		catch(IOException e2)
		{
			System.out.println("exception caught");
		}
	}
}
class UpperLower
{
	public static void main(String args[])
	{
		T1 t1= new T1();
		t1.start();
		T2 t2 = new T2();
		t2.start();
	}
}
