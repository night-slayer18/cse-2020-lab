abstract class Shape
{
    abstract void numberOfsides(int a);
}
class rectangle extends Shape
{
    void numberOfsides(int a)
    {
        System.out.println("number of sides of rectangle "+a);
    }
}
class triangle extends Shape
{
    void numberOfsides(int a)
    {
        System.out.println("number of sides of triangle "+a);
    }   
}
class hexagon extends Shape
{
    void numberOfsides(int a)
    {
        System.out.println("number of sides of hexagon "+a);
    }
}
class Abstract
{
    public static void main(String args[])
    {
        rectangle r = new rectangle();
        r.numberOfsides(2);
        triangle t = new triangle();
        t.numberOfsides(3);
        hexagon h = new hexagon();
        h.numberOfsides(6);
    }
}

