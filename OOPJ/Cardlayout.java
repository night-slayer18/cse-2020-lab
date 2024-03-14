import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
class Ex implements ActionListener
{
	JFrame jf;
	JCheckBox c1,c2,c3,c4,c5,c6;
	CardLayout cl;
	JPanel parentpanel,childpanel1,childpanel2,childpanel3;
	JButton b1,b2;
	Ex()
	{
		jf=new JFrame("GUI");
		jf.setSize(500,500);
		jf.setVisible(true);
		c1=new JCheckBox("s");
		c2=new JCheckBox("a");
		c3=new JCheckBox("m");
		c4=new JCheckBox("a");
		c5=new JCheckBox("n");
		c6=new JCheckBox("u");
		b1= new JButton("click1");
		b2= new JButton("click2");
		parentpanel = new JPanel();
		cl= new CardLayout();
		parentpanel.setLayout(cl);
		jf.setLayout(new FlowLayout());
		childpanel1= new JPanel();
		childpanel2 = new JPanel();
		childpanel3 = new JPanel();
		childpanel1.add(c1);
		childpanel1.add(c2);
		childpanel2.add(c3);
		childpanel2.add(c4);
		childpanel3.add(c5);
		childpanel3.add(c6);
		parentpanel.add(childpanel1,"first");
		parentpanel.add(childpanel2,"second");
		parentpanel.add(childpanel1,"third");
		jf.add(parentpanel);
		jf.add(b1);
		jf.add(b2);
		b1.addActionListener(this);
		b2.addActionListener(this);
	}
	public void actionPerformed(ActionEvent ae)
	{
		JButton b=(JButton)ae.getSource();
		if(b==b1)
		{
			cl.show(parentpanel,"second");
		}
		else if(b==b2)
		{
			cl.show(parentpanel,"third");
		}
	}
}
class Cardlayout
{
	public static void main(String args[])
	{
		Ex e=new Ex();
	}
}
