import java.util.*;
class employee
{
	String name,address;
	int age;
	long ph,salary;
	void assign()
	{
		System.out.println("\nenter the details");
		Scanner s =new Scanner(System.in);
		System.out.print("name:");
		name=s.nextLine();
		System.out.print("address:");
		address=s.nextLine();
		System.out.print("age:");
		age=s.nextInt();
		System.out.print("phone number:");
		ph=s.nextLong();
		System.out.print("salary:");
		salary=s.nextLong();
	}
	void display()
	{
		System.out.println("name :"+name);
	 	System.out.println("age : "+age);
	 	System.out.println("address: "+address);
	 	System.out.println("phone number :"+ph);
	}
	void printSalary()
	{
	 	System.out.println("salary:"+salary);
	}
}
class officer extends employee
{
	String specialisation;
	void spcl()
	{
		Scanner s= new Scanner(System.in);
		System.out.print("enter the specialisation:");
		specialisation=s.nextLine();
	}
	void d1()
	{
		System.out.println("specialisation:"+specialisation);
	}
}
class manager extends employee
{	
	String department;
	void dep()
	{
		Scanner s= new Scanner(System.in);
		System.out.print("enter the department:");
		department=s.nextLine();
	}
	void d2()
	{
		System.out.println("department:"+department);
	}
}
class Employee
{
	public static void main(String args[])
	{
		officer o = new officer();
		o.assign();
		o.spcl();
		System.out.println("\nthe details of officer");
		o.display();
		o.d1();
		o.printSalary();
		manager m = new manager();
		m.assign();
		m.dep();
		System.out.println("\nthe details of manager");
		m.display();
		m.d2();
		m.printSalary();
	}
}

