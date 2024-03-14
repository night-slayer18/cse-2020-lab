import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
class Ex implements ActionListener
{
	JFrame jf;
	JTextField tf;
	JButton jb;
	JLabel jl;
	Ex()
	{
		jf= new JFrame("GUI");
		jf.setSize(500,500);
		jf.setLayout(new FlowLayout());
		jl= new JLabel("NAME");
		tf = new JTextField(20);
		jb= new JButton("SUBMIT");
		jf.add(jl);
		jf.add(tf);
		jf.add(jb);
		jb.addActionListener(this);
		jf.setVisible(true);
	}
	public void actionPerformed(ActionEvent ae)
	{
		String s1= tf.getText();
		if(s1.equals("pranav"))
		{
			ImageIcon i1 = new ImageIcon("/home/sam/Downloads/WhatsApp Image 2021-12-29 at 1.25.59 PM.jpeg");
			jl.setIcon(i1);
			tf.setText("");
		}
		else if(s1.equals("tanu"))
		{
			ImageIcon i2= new ImageIcon("/home/sam/Downloads/WhatsApp Image 2022-02-26 at 7.26.29 AM.jpeg");
			jl.setIcon(i2);
			tf.setText("");
		}
		else if(s1.equals("nashi"))
		{
			ImageIcon i3= new ImageIcon("/home/sam/Downloads/WhatsApp Image 2022-02-27 at 10.05.28 AM.jpeg");
			jl.setIcon(i3);
			tf.setText("");
		}
	}
}
class ImageGUI
{
	public static void main(String args[])
	{
		Ex e = new Ex();
	}
}
