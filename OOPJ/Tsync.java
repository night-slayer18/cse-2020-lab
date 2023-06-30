class First
{
	synchronized void display()
	{
		for(int i=0; i<=9; i++)
			System.out.println(i);
	}
}

class Second extends Thread
{
	First fobj;
	Second(First f1)
	{
		fobj = f1;
	}
	public void run()
	{
		fobj.display();
	}
}

class Tsync
{
	public static void main(String a[])
	{
		First f = new First();
		Second t1 = new Second(f);
		Second t2 = new Second(f);
		Second t3 = new Second(f);
		t1.start();
		t2.start();
		t3.start();
	}
}

