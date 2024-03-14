import java.util.*;
class Matrix
{
	public static void main(String args[])
	{
		int i,j,k;
		int a[][]=new int[3][3];
		int b[][]=new int[3][3];
		int c[][]=new int[3][3];
		Scanner sc=new Scanner(System.in);
		System.out.println("enter the first matrix");
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				a[i][j]=sc.nextInt();
			}
		}
		System.out.println("enter the second matrix");
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				b[i][j]=sc.nextInt();
			}
		}
		System.out.println("the first matrix is");
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				System.out.print(a[i][j]+" ");
			}
			System.out.print("\n");
		}
		System.out.println("the second matrix is");
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				System.out.print(b[i][j]+" ");
			}
			System.out.print("\n");
		}
		for (i=0;i<3; i++)
		{
			for (j=0; j <3; j++) 
			{
				int sum=0;
				for (k=0;k<3; k++) 
				{
					sum=sum+(a[i][k] * b[k][j]);
				}
				c[i][j]=sum;
			}
			
		}
		System.out.println("the resultant matrix after multiplication is");
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				System.out.print(c[i][j]+" ");
			}
			System.out.println();
		}
	}
}


