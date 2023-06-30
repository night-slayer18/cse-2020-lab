import java.util.*;
class sum2Darray
{
	public static void main(String args[])
	{
	int a[][]=new int[10][10];
	int b[][]=new int[10][10];
	int c[][]=new int[10][10];
	System.out.print("Enter the number of rows:");
	Scanner s=new Scanner(System.in);
	int r1,c1,i,j,r2,c2;
	r1=s.nextInt();
	System.out.print("Enter the number of columns:");
	c1=s.nextInt();
	for(i=0;i<r1;i++)
		for(j=0;j<c1;j++)
			a[i][j]=s.nextInt();
	System.out.print("Enter the number of rows:");
	r2=s.nextInt();
	System.out.print("Enter enter the number of column:");
	c2=s.nextInt();
	for(i=0;i<r2;i++)
		for(j=0;j<c2;j++)
			b[i][j]=s.nextInt();
	if(r1==r2&&c1==c2)
	for(i=0;i<r2;i++)
		for(j=0;j<c2;j++)
			c[i][j]=a[i][j]+b[i][j];
	else
	System.out.println("Addition Not Possible");
	System.out.println("the resultant matrix is");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		System.out.print(c[i][j] + " ");
		System.out.print("\n");
	}
	}
}
