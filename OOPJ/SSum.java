import java.util.*;
class SSum
{
	public static void main(String args[])
	{
		String s;
		int a,sum=0;
		Scanner sc= new Scanner(System.in);
		s=sc.nextLine();
		StringTokenizer t= new StringTokenizer(s);
		while(t.hasMoreTokens())
		{
			String s1=t.nextToken();
			a=Integer.parseInt(s1);
			sum=sum+a;
		}
		System.out.println("sum is:"+sum);
	}
}
