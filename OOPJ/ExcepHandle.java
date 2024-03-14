import java.io.*;
import java.util.Scanner;
class voting
{
	void vote(int age) throws IOException 
	{
		 if (age < 18)
			 throw new IOException();
 		else
			 System.out.println("ELIGIBLE TO VOTE");
 	}
}
class ExcepHandle
{
 	public static void main(String args[]) 
 	{
		voting v = new voting();
		int age;
		Scanner sc = new Scanner(System.in);
		try 
		{
			System.out.println("ENTER THE AGE");
			age = sc.nextInt();
			v.vote(age);
		}
		catch (IOException e) 
		{
			System.out.println("NOT ELIGIBE TO VOTE");
		} 
		finally 
		{
			System.out.println("FINISHED....");
 		}
	}
}
