import java.util.*;
class primerange
{
	public static void main(String args[])
	{
		int i,n,flag=0;
		System.out.println("the range of prime numbers from 1 to 100");
		for(n=1;n<=100;n++)
		{
			flag=0;
			for(i=2;i<n;i++)
			{
				if(n%i==0)
				{
					flag=1;
					break;
					
				}
			}
			if(flag==0 && n!=1)
			{
				System.out.println(n);
			}
		}

	}
}	
