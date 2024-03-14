import java.util.*;
class Tokenizer
{
	public static void main(String args[])
	{

		Scanner sc=new Scanner(System.in);
		System.out.println("enter the string of numbers");
		String s=sc.nextLine();
		int sum=0;
		StringTokenizer st=new StringTokenizer(s);
		while(st.hasMoreTokens())
		{
			String s1=st.nextToken();
			System.out.println(s1);
			int a=Integer.parseInt(s1);
			sum=sum+a;
		}
		System.out.println("sum "+sum);
	}
}

