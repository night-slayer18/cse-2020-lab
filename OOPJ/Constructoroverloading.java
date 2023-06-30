import java.util.*;
class Over
{
	double h;
	double w;
	double d;
	Over()
	{
		h=3;
		w=3;
		d=3;
	}
	Over(double a,double b,double c)
	{
		h=a;
		w=b;
		d=c;
	}
	Over(double len)
	{
		h=len;
		w=len;
		d=len;
	}
	double volume()
	{
		double v;
		v=h*w*d;
		System.out.println(v);
	}
}
class Constructoroverloading
{
	public static void main(String args[])
	{
		Over s1= new Over();
		s1.volume();
		Over s2= new Over(5.93,7.65,5.55);
		s2.volume();
		Over s3= new Over(4.98);
		s3.volume();
	}
}

	
