import java.util.*;
class Doubly
{
	Scanner sc=new Scanner(System.in);
	class Node
	{
		int data;
		Node next,prev;
	}
	Node head=null,tail=null,temp;
	void insertion()
	{
		int item;
		Node n = new Node();
		System.out.println("Enter the data:");
		item=sc.nextInt();
		n.data=item;
		n.next=null;
		n.prev=tail;
		if(tail==null)
		{
			head=n;
			tail=n;
		}
		else
		{
			tail.next=n;
			tail=n;
		}
	}
	void deletion()
	{
	 	int d;
	 	System.out.println("enter the element to be deleted");
	 	d=sc.nextInt();
	 	temp=head;
	 	while(temp!=null && temp.data!=d)
	 	{
	 		temp=temp.next;
	 	}
	 	if(temp==null)
	 	{
	 		System.out.println("element not found");
	 	}
	 	else if(temp.next!=null && temp.prev!=null)
	 	{
	 		temp.prev.next=temp.next;
	 		temp.next.prev=temp.prev;
	 	}
	 	else if(temp.next==null && temp.prev==null)
	 	{
	 		head=null;
	 		tail=null;
	 	}
	 	else if(temp.prev==null)
	 	{
	 		head=temp.next;
	 		temp.next.prev=null;
	 	}
	 	else if(temp.next==null)
	 	{
	 		tail=temp.prev;
	 		temp.prev.next=null;
	 	}	 		
	 }
	void display()
	{
		if(head==null)
		{
			System.out.println("List is empty");
		}
		else
		{
			temp=head;
			while(temp!=null)
			{
				System.out.print(temp.data+" ");
				temp=temp.next;
			}
		}
	}
}
class DoublyLL
{
	public static void main(String args[])
	{
		Doubly d= new Doubly();
		int opt;
		Scanner s= new Scanner(System.in);
		do
		{
			System.out.println("\n1.INSERTION\n2.DELETION\n3.DISPLAY\n4.EXIT\n");
			System.out.println("enter the option:");
			opt=s.nextInt();
			switch(opt)
			{
				case 1:	
						d.insertion();
						break;
				case 2:
						d.deletion();
						break;
				case 3:
						d.display();
						break;
				case 4:
						break;
				default:
						System.out.println("enter a valid input");
			}
		}while(opt!=4);
	}
}	
		
		
