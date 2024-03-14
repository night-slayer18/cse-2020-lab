class A
{	
	int a,b,c;
	void show()
	{
		this.a=10;
		this.b=20;
		this.c=30;
	}
}
class B extends A
{
	void show()
	{
		super.show();
		int v;
		v=a*b*c;
		System.out.println(v);
	}
}
class Methover
{
	public static void main(String args[])
	{
		B b= new B();
		b.show();
	}
}
