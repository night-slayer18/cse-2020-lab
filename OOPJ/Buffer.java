import java.io.*;
class Buffer
{
	public static void main(String args[])
	{
		try
		{
			BufferReader br= new BufferReader(new InputStreamReader(System.in));
			String x=br.readLine();
			System.out.println(x);
		}
		catch(Exception e)
		{
			System.out.println(e);
		}
	}
}

