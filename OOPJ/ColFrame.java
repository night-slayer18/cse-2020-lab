import java.util.*;
class ColFrame
{
	public static void main(String args[])
	{
		System.out.println(args[0]);
		System.out.println(args[1]);
		ArrayList al= new ArrayList();
		String s1="hello";
		String s2 ="hai";
		String s3="bye";
		al.add(s1);
		al.add(s2);
		al.add(s3);
		System.out.println(al);
		boolean b= al.contains("hai");
		System.out.println(b);
		ArrayList ab= new ArrayList();
		ab.add("welcome");
		ab.add("hai");
		ab.add("hello");
		b=al.addAll(ab);
		System.out.println(b);
		System.out.println(al);
		//b=al.removeAll(ab);
		//System.out.println(b);
		//System.out.println(al);
		b=al.retainAll(ab);
		System.out.println(b);
		System.out.println(al);
		b=al.containsAll(ab);
		System.out.println(b);
		b=al.remove("hai");
		System.out.println(al);
		int a=al.size();
		System.out.println(a);
	}
} 
