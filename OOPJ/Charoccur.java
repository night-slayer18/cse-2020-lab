import java.util.*;
class Charoccur
{
	public static void main(String args[])
	{
		int i,len,count=0;
		String str;
		char c;
		System.out.println("enter the string");
		Scanner sc=new Scanner(System.in);
		str=sc.nextLine();
		len=str.length();
		System.out.println("enter the character to be searched");
		c=sc.nextLine().charAt(0);
		for(i=0;i<len-1;i++)
		{
			if(str.charAt(i)==c)
			{
				count++;
			}
		}
		System.out.println("the number of occcurence of "+c+" is:"+count);
	}
}
