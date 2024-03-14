import java.io.*;
class Textfile
{
    public static void main(String arg[])
    {
        int a;
        char ch;
        try
        {
            FileInputStream fis=new FileInputStream("hello1.txt");
            FileOutputStream fos=new FileOutputStream("hello2.txt");
            do
            {
                a=fis.read();
                if(a!=-1)
                {
                    fos.write(a);
                    ch=(char)a;
                    System.out.print(ch);
                }
            }while(a!=-1);
            fis.close();
            fos.close();
        }
        catch(IOException e)
        {
            System.out.println("Exception caught "+e);
        }
    }
}
