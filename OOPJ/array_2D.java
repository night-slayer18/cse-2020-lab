import java.util.*;
class array_2D
{
	public static void main(String args[])
	{
		int i,j,r,c;
		int a[][]=new int[10][10];
		System.out.println("enter the number of rows:");
		Scanner sc=new Scanner(System.in);
		r=sc.nextInt();
		System.out.println("enter the number of columns:");
		c=sc.nextInt();
		System.out.println("enter the elements of the 2D array");
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				a[i][j]=sc.nextInt();
			}
		}
		System.out.println("the 2D array is");
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				System.out.print(a[i][j]+"\t");
			}
			System.out.println();
		}
	}
}
		
