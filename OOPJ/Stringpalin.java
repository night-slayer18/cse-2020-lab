import java.util.*;
class Stringpalin
{
	public static void main(String args[])
	{
			int i,len,flag=0;
			String str;
			System.out.println("enter the string");
			Scanner sc=new Scanner(System.in);
			str=sc.nextLine();
			len=str.length();
			for(i=0;i<len-1;i++)
			{
				if(str.charAt(i)!=str.charAt(len-i-1))
				{
					flag++;
				}
			}
			if(flag==0)
			{
				System.out.println("palindrome");
			}
			else
			{
				System.out.println("not palindrome");
			}
	}
}
			
			
			
			
			
