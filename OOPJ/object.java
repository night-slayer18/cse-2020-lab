class box
{
	int a;
	int b;
	box(int i,int j)
	{
		a=i;b=j;
	}
	boolean equal(box o)
	{
		if(o.a==a && o.b==b)
		{
			return true;
		}
		else
			return false;
	}
}
class Baka
{
	public static void main(String args[])
	{	
		boolean b;
		box b1= new box(2,2);
		box b2= new box(2,2);
		b=b1.equal(b2);
		System.out.print(b);
	}
}

	
