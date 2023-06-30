class A
{
	void display()
	{
		System.out.println("A is superclass");
	}
}
class B extends A
{
	void display()
	{
		System.out.println("B is subclass");
		super.display();
	}
}
class Methoverriding
{
	public static void main(String args[])
	{
		B b1= new B();
		b1.display();
	}
}

