import java.io.*;
class file
{
	void fileopen() throws FileNotFoundException
	{
		FileInputStream fis= new FileInputStream("Hello.txt");
	}
}
class Throws
{
	public static void main(String args[])
	{
		try
		{
			file f = new file();
			f.fileopen();
		}
		catch(FileNotFoundException e)
		{
			System.out.println("File not found exception caught");
		}
	}
}

