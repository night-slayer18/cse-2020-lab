class A 
{
	A()
	{
		System.out.println("super class");
	}
}
class B extends A
{
	B()
	{
		System.out.println("subclass");
	}
}
class Orderconst
{
	public static void main(String args[])
	{
		B b= new B();
	}
}
