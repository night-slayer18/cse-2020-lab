import java.io.*;
class FileException
{
    public static void main(String arg[])
    {
            int a;
            try
            {
                    FileInputStream fis=new FileInputStream("hello1.txt");
                    FileOutputStream fos=new FileOutputStream("hello2.txt");
                    do
                    {
                        	       a=fis.read();
                                fos.write(a);
                    }while(a!=-1);
                    fis.close();
                    fos.close();
                    System.out.println("NO exception Unhandled");
                    System.out.println("program copying successfull");
                    
            }
            catch(FileNotFoundException e)
            {
                    System.out.println("Exception caught "+e);
            }
            catch(IOException e)
            {
                    System.out.println("Exception caught "+e);
            }
    }
}

