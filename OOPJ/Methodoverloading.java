class Method
{
	void test()
	{
		int a=5;
		System.out.println(a);
	}
	void test(double a,double b)
	{
		System.out.println(a);
		System.out.println(b);
	}
	void test(double a,int b)
	{
		System.out.println(a);
		System.out.println(b);
	}
}
class Methodoverloading
{
	public static void main(String args[])
	{
		Method d = new Method();
		d.test();
		d.test(20.5,13.5);
		d.test(11.9,9);
	}
}
