import java.util.*;
class MatrixMulti
{
	public static void main(String args[])
	{
		int i,j,k,r1,c1;
		int a[][]=new int[10][10];
		int b[][]=new int[10][10];
		int c[][]=new int[10][10];
		System.out.println("enter the number of rows:");
		Scanner sc=new Scanner(System.in);
		r1=sc.nextInt();
		System.out.println("enter the number of columns:");
		c1=sc.nextInt();
		System.out.println("enter the elements of the 2D array");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				a[i][j]=sc.nextInt();
			}
		}
		System.out.println("the 2D array is");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				System.out.print(a[i][j]+"\t");
			}
			System.out.println();
		}
		int r2,c2;
		System.out.println("enter the number of rows:");
		r2=sc.nextInt();
		System.out.println("enter the number of columns:");
		c2=sc.nextInt();
		System.out.println("enter the elements of the 2D array");
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
				b[i][j]=sc.nextInt();
			}
		}
		System.out.println("the 2D array is");
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
				System.out.print(b[i][j]+"\t");
			}
			System.out.println();
		}
		if(c1==r2)
   		{
        	for(i=0;i<r1;i++)
        	{
            	for(j=0;j<c2;j++)
            	{
                	for(k=0;k<c1;k++)
                	{
                    	c[i][j]+=a[i][k]*b[k][j];
                	}
            	}
        	}
    	}
    	else
    	{
    		System.out.println("multiplication not possible");
    	}
    	System.out.println("the product of two arrays is");
    	for(i=0;i<r1;i++)
    	{
    		for(j=0;j<c2;j++)
    		{
    			System.out.print(c[i][j]+"\t");
    		}
    		System.out.print("\n");
    	}
    }   		
}
