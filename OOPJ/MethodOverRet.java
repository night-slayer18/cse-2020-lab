class Test 
{ 
	public static int checkAndPrint(String arg1, int arg2, String arg3) 
	{
	 	String arg1String=String.valueOf(arg1); 
	 	String arg2String=String.valueOf(arg2);
	 	String arg3String=String.valueOf(arg3);
	 	String s1=arg1String.concat(arg2String);
	 	String s2=s1.concat(arg3String);
	 	boolean b=s2.endsWith("house");
	 	for(int i = 0;i<s2.length();i=i+2)
		{
			System.out.println(s2.charAt(i));
		}
	 	if(b)
	 	{
	 		return 999;
	 	}
	 	else
	 	{	
	 		return 888;
	 	}
	 }
	 public static int checkAndPrint(String arg1, int arg2, int arg3) 
	{
	 	String arg1String=String.valueOf(arg1); 
	 	String arg2String=String.valueOf(arg2);
	 	String arg3String=String.valueOf(arg3);
	 	String s1=arg1String.concat(arg2String);
	 	String s2=s1.concat(arg3String);
	 	boolean b=s2.endsWith("house");
	 	for(int i = 0;i<s2.length();i=i+2)
		{
			System.out.println(s2.charAt(i));
		}
	 	if(b)
	 	{
	 		return 999;
	 	}
	 	else
	 	{	
	 		return 888;
	 	}
	 }
	public static int checkAndPrint(int arg1, int arg2, String arg3) 
	{
	 	String arg1String=String.valueOf(arg1); 
	 	String arg2String=String.valueOf(arg2);
	 	String arg3String=String.valueOf(arg3);
	 	String s1=arg1String.concat(arg2String);
	 	String s2=s1.concat(arg3String);
	 	boolean b=s2.endsWith("house");
	 	for(int i = 0;i<s2.length();i=i+2)
		{
			System.out.println(s2.charAt(i));
		}
	 	if(b)
	 	{
	 		return 999;
	 	}
	 	else
	 	{	
	 		return 888;
	 	}
	 }
}
class MethodOverRet
{
	public static void main(String args[])
	{
		Test c= new Test();
		int b;
		b=c.checkAndPrint("ABCDE",567,"C");
	}
}
