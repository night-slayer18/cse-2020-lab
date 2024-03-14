import java.io.*;
class MyException
{
    void eligible(int a)
    {
        try
        {
            int k;
            if(a == 0)
                throw new ArithmeticException();
            else
            {
                k = 42/a;
                System.out.println(k);
            }
        }
        catch(ArithmeticException e)
        {
            System.out.println("Exception caught");
        }
    }
}

class Main
{
    MyException m = new MyException();
    m.eligible(5);
}
