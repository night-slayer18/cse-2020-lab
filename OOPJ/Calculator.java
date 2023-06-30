import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
class ex implements ActionListener
{
	JFrame jf;
	JTextField ft1,ft2,ft3;
	JButton jb1,jb2,jb3,jb4;
	ex()
	{
		jf= new JFrame("GUI");
		jf.setVisible(true);
		jf.setSize(500,500);
		jf.setLayout(new FlowLayout());
		ft1=new JTextField(20);
		ft2=new JTextField(20);
		ft3=new JTextField(20);
		jb1= new JButton("+");
		jb2= new JButton("-");
		jb3= new JButton("*");
		jb4= new JButton("/");
		jf.add(ft1);
		jf.add(ft2);
		jf.add(jb1);
		jf.add(jb2);
		jf.add(jb3);
		jf.add(jb4);
		jf.add(ft3);
		jb1.addActionListener(this);
		jb2.addActionListener(this);
		jb3.addActionListener(this);
		jb4.addActionListener(this);
	}
	public void actionPerformed(ActionEvent ae)
	{
		String s1,s2,s3;
		int a,b,c;
		JButton b1;
		Object b11=ae.getSource();
		b1=(JButton)b11;
		s1=ft1.getText();
		s2=ft2.getText();
		a=Integer.parseInt(s1);
		b=Integer.parseInt(s2);
		if(b1==jb1)
			c=a+b;
		else if(b1==jb2)
			c=a-b;
		else if (b1==jb3)
			c=a*b;
		else
			c=a/b;
		s3=String.valueOf(c);
		ft3.setText(s3);
	}
}
class Calculator
{
	public static void main(String args[])
	{
		ex e= new ex();
	}
}
		
