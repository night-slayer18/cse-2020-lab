import java.util.*;
class command
{  
    public static void main(String args[])
    {  
    	String a[]=new String[3];
      	for(int i=0;i<args.length;i++)  
      	{
      		a[i]=args[i];
    		System.out.println(args[i]);  
    	}    
    	if(args[2].equals(3))
    	{
    		System.out.println("THREE");  
    	}
    	 if(args[1].equals(2))
    	{
    		System.out.println("TWO");  
    	}
    	 if(args[0].equals(1))
    	{
    		System.out.println("ONE");  
    	}
    }   
}


