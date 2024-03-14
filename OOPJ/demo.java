import java.util.*;
class box
{
	double height;
	double width;
	double radius;
	void rect(double a,double b)
	{
		height=a;
		width=b;
		System.out.println("area "+height*width);
	}
	void cir(double c)
	{
		radius=c;
		System.out.println("area "+3.14*radius*radius);
	}
	void tri(double d,double e)
	{
		height=d;
		width=e;
		System.out.println("area "+0.5*height*width);
	}
}
class Demo
{
	public static void main(String args[])
	{
		box b1= new box();
		b1.rect(5,6);
		b1.cir(10);
		b1.tri(2,3);
	}
}
		
