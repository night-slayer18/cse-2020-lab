import java.io.*;
import java.util.*;
class OddEven
{
    public static void main(String arg[])
    {
        int a,n,i=1;
        try
        {
            BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
            FileOutputStream fos=new FileOutputStream("a.txt");
            FileOutputStream fos1=new FileOutputStream("b.txt");
            FileOutputStream fos2= new FileOutputStream("c.txt");
	    System.out.println("enter the number of terms ");
	    Scanner sc=new Scanner(System.in);
	    n=sc.nextInt();
	    while(i<=n)
	    {
            	a=br.read();
            	fos.write(a);
		if(a%2==0)
		{
			fos1.write(a);
		}
		else
		{
			fos2.write(a);
		}
		i++;
            }
            fos.close();
            fos1.close();
            fos2.close();
        }
        catch(IOException e)
        {
            System.out.println("Exception caught "+e);
        }
    }
}
