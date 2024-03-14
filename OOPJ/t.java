class box
{
	double w;
	double l;
	double d;
}
class t
{
	public static void main(String args[])
	{
		double vol;
		box b1=new box();
		b1.w=10;
		b1.l=10;
		b1.d=10;
		vol=b1.l*b1.w*b1.d;
		System.out.println(vol);
	}
}
