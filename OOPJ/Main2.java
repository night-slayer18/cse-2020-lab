import java.io.*;
class Ex
{
    void fileopen() throws FileNotFoundException
    {
        FileInputStream fis = new FileInputStream("hello.txt");
    }
}

class Main2
{
    public static void main(String a[])
    {
        Ex e = new Ex();
        try
        {
            e.fileopen();
        }
        catch(Exception fe)
        {
            System.out.println("Exception caught");
        }
    }
}
